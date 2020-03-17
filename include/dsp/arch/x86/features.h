/*
 * features.h
 *
 *  Created on: 28 февр. 2020 г.
 *      Author: Vladimir Sadovnikov <lsp.plugin@gmail.com>
 *
 * This file is part of tamgamp.lv2 <https://github.com/sadko4u/tamgamp.lv2>.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */


#ifndef DSP_ARCH_X86_FEATURES_H_
#define DSP_ARCH_X86_FEATURES_H_

namespace x86
{
    enum cpu_features_enum
    {
        // Different legacy feature set
        CPU_OPTION_FPU              = 1 << 0,
        CPU_OPTION_CMOV             = 1 << 1,
        CPU_OPTION_MMX              = 1 << 2,

        // SSE feature set
        CPU_OPTION_FXSAVE           = 1 << 3,
        CPU_OPTION_SSE              = 1 << 4,
        CPU_OPTION_SSE2             = 1 << 5,
        CPU_OPTION_SSE3             = 1 << 6,
        CPU_OPTION_SSSE3            = 1 << 7,
        CPU_OPTION_SSE4_1           = 1 << 8,
        CPU_OPTION_SSE4_2           = 1 << 9,
        CPU_OPTION_SSE4A            = 1 << 10,

        // AVX and FMA feature set
        CPU_OPTION_OSXSAVE          = 1 << 11,
        CPU_OPTION_FMA3             = 1 << 12,
        CPU_OPTION_FMA4             = 1 << 13,
        CPU_OPTION_AVX              = 1 << 14,
        CPU_OPTION_AVX2             = 1 << 15,

        // AVX-512 feature set
        CPU_OPTION_AVX512F          = 1 << 16,
        CPU_OPTION_AVX512DQ         = 1 << 17,
        CPU_OPTION_AVX512IFMA       = 1 << 18,
        CPU_OPTION_AVX512PF         = 1 << 19,
        CPU_OPTION_AVX512ER         = 1 << 20,
        CPU_OPTION_AVX512CD         = 1 << 21,
        CPU_OPTION_AVX512BW         = 1 << 22,
        CPU_OPTION_AVX512VL         = 1 << 23,
        CPU_OPTION_AVX512VBMI       = 1 << 24
    };

    enum cpu_vendor_enum
    {
        CPU_VENDOR_UNKNOWN,
        CPU_VENDOR_AMD,
        CPU_VENDOR_HYGON,
        CPU_VENDOR_INTEL,
        CPU_VENDOR_NSC,
        CPU_VENDOR_TRANSMETA,
        CPU_VENDOR_VIA
    };

    typedef struct cpu_features_t
    {
        uint32_t            vendor;
        uint32_t            family;
        uint32_t            model;
        uint32_t            features;
        char                brand[56];
    } cpu_features_t;

    enum feature_t
    {
        FEAT_FAST_MOVS,         // Processor implements optimized MOVS instruction
        FEAT_FAST_AVX,          // Fast AVX implementation
        FEAT_FAST_FMA3          // Fast FMA3 implementation
    };

    /**
     * Check only one feature from feature_t at one time
     * @param f detected CPU features
     * @param ops feature to check
     * @return true if feature is supported
     */
    bool feature_check(const cpu_features_t *f, feature_t ops);
}

#endif /* DSP_ARCH_X86_FEATURES_H_ */
