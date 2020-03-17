/*
 * context.h
 *
 *  Created on: 27 февр. 2020 г.
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

#ifndef DSP_COMMON_CONTEXT_H_
#define DSP_COMMON_CONTEXT_H_

#ifndef __DSP_DSP_DEFS
    #error "This header should not be included directly"
#endif /* __DSP_DSP_DEFS */

//-----------------------------------------------------------------------
// DSP context functions
namespace dsp
{
    #pragma pack(push, 1)
    /**
     * DSP context to store and restore machine state
     */
    typedef struct context_t
    {
        uint32_t        top;
        uint32_t        data[15];
    } context_t;
    #pragma pack(pop)

    typedef struct info_t
    {
        const char     *arch;       /* Architecture information */
        const char     *cpu;        /* CPU information */
        const char     *model;      /* CPU model information */
        const char     *features;   /* CPU features */
    } info_t;

    // Start and finish types
    typedef void (* start_t)(context_t *ctx);
    typedef void (* finish_t)(context_t *ctx);

    /** Initialize DSP
     *
     */
    void init();

    /** Start DSP processing, save machine context
     *
     * @param ctx structure to save context
     */
    extern void (* start)(context_t *ctx);

    /** Finish DSP processing, restore machine context
     *
     * @param ctx structure to restore context
     */
    extern void (* finish)(context_t *ctx);

    /**
     * Get DSP information, returns pointer to dsp::info_t structure
     * that can be freed by free()
     * @return pointer to dsp::info_t structure
     */
    extern info_t * (*info)();
}


#endif /* DSP_COMMON_CONTEXT_H_ */
