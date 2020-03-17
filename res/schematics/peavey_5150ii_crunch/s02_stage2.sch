v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 40200 46200 1 0 0 input-1.sym
{
T 40200 46500 5 10 0 0 0 0 1
device=INPUT
T 40200 46200 5 10 1 1 0 0 1
refdes=IN1
}
C 49600 47400 1 180 1 output-1.sym
{
T 49700 47100 5 10 0 0 180 6 1
device=OUTPUT
T 49800 47400 5 10 1 1 180 6 1
refdes=OUT1
}
C 48900 45200 1 90 1 capacitor-2.sym
{
T 48200 45000 5 10 0 0 270 2 1
device=POLARIZED_CAPACITOR
T 49200 44900 5 10 1 1 0 6 1
refdes=C2
T 48000 45000 5 10 0 0 270 2 1
symversion=0.1
T 49300 44400 5 10 1 1 0 6 1
value=0.33u
}
C 46500 44400 1 90 0 resistor-2.sym
{
T 46150 44800 5 10 0 0 90 0 1
device=RESISTOR
T 46200 45200 5 10 1 1 180 0 1
refdes=R3
T 45800 44700 5 10 1 1 0 0 1
value=470k
}
C 45900 46500 1 180 0 capacitor-1.sym
{
T 45700 45800 5 10 0 0 180 0 1
device=CAPACITOR
T 45100 46400 5 10 1 1 0 0 1
refdes=C3
T 45700 45600 5 10 0 0 180 0 1
symversion=0.1
T 46000 46600 5 10 1 1 180 0 1
value=470p
}
C 47600 47600 1 90 0 resistor-2.sym
{
T 47250 48000 5 10 0 0 90 0 1
device=RESISTOR
T 47300 48300 5 10 1 1 180 0 1
refdes=R1
T 46900 47900 5 10 1 1 0 0 1
value=220k
}
C 49100 47500 1 180 0 capacitor-1.sym
{
T 48900 46800 5 10 0 0 180 0 1
device=CAPACITOR
T 48300 47400 5 10 1 1 0 0 1
refdes=C7
T 48900 46600 5 10 0 0 180 0 1
symversion=0.1
T 49400 47600 5 10 1 1 180 0 1
value=0.022u
}
C 45900 45500 1 180 0 resistor-2.sym
{
T 45500 45150 5 10 0 0 180 0 1
device=RESISTOR
T 45200 45600 5 10 1 1 0 0 1
refdes=R4
T 45600 45200 5 10 1 1 180 0 1
value=470k
}
C 47800 43500 1 0 1 gnd-1.sym
C 47800 44300 1 90 0 resistor-2.sym
{
T 47450 44700 5 10 0 0 90 0 1
device=RESISTOR
T 48100 45000 5 10 1 1 180 0 1
refdes=R7
T 47800 44500 5 10 1 1 0 0 1
value=2.2k
}
C 42300 46500 1 180 0 capacitor-1.sym
{
T 42100 45800 5 10 0 0 180 0 1
device=CAPACITOR
T 41500 46400 5 10 1 1 0 0 1
refdes=C1
T 42100 45600 5 10 0 0 180 0 1
symversion=0.1
T 41800 46000 5 10 1 1 180 0 1
value=2.2n
}
C 45100 44300 1 0 0 triode.sym
{
T 47000 46800 5 10 1 1 0 0 1
refdes=U2
T 47800 46800 5 10 1 1 0 0 1
value=12ax7
T 47500 46400 5 10 0 1 0 0 1
device=TRIODE
}
C 47300 48700 1 0 0 generic-power-1.sym
{
T 47300 49000 5 10 1 1 0 0 1
refdes=Vcc1
T 47800 49000 5 10 1 1 0 0 1
value=340V
T 47300 48700 5 10 0 0 0 0 1
device=POWER
}
N 41000 46300 41400 46300 4
N 45900 46300 46700 46300 4
N 47500 47100 47500 47600 4
N 47500 48500 47500 48700 4
N 48200 47300 47500 47300 4
N 46400 45300 46400 46300 4
N 45900 45400 46400 45400 4
N 43200 45400 45000 45400 4
N 42700 44100 48700 44100 4
N 47700 45200 47700 45600 4
N 47700 45400 48700 45400 4
N 48700 45400 48700 45200 4
N 49600 47300 49100 47300 4
N 47700 43800 47700 44100 4
N 46400 44100 46400 44400 4
N 47700 44300 47700 44100 4
N 48700 44300 48700 44100 4
C 42600 44900 1 270 1 resistor-variable-2.sym
{
T 43500 45700 5 10 0 1 90 2 1
device=VARIABLE_RESISTOR
T 42350 45600 5 10 1 1 180 6 1
refdes=P1
T 44600 45700 5 10 1 1 180 0 1
value=value=1M,var=gain
}
C 43900 46500 1 180 0 capacitor-1.sym
{
T 43700 45800 5 10 0 0 180 0 1
device=CAPACITOR
T 43100 46400 5 10 1 1 0 0 1
refdes=C4
T 43700 45600 5 10 0 0 180 0 1
symversion=0.1
T 44000 46600 5 10 1 1 180 0 1
value=6.8n
}
N 42700 44100 42700 44900 4
N 42300 46300 43000 46300 4
N 42700 45800 42700 46300 4
N 43900 46300 45000 46300 4
N 44700 46300 44700 45400 4