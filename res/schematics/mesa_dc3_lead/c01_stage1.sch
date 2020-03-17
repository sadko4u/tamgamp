v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 45500 44600 1 90 0 resistor-2.sym
{
T 45150 45000 5 10 0 0 90 0 1
device=RESISTOR
T 45900 45300 5 10 1 1 180 0 1
refdes=R5
T 45600 44800 5 10 1 1 0 0 1
value=1.5k
}
C 41200 46700 1 0 0 input-1.sym
{
T 41200 47000 5 10 0 0 0 0 1
device=INPUT
T 41200 46700 5 10 1 1 0 0 1
refdes=IN1
}
C 48200 46300 1 180 1 output-1.sym
{
T 48300 46000 5 10 0 0 180 6 1
device=OUTPUT
T 48400 46300 5 10 1 1 180 6 1
refdes=OUT1
}
C 45200 44400 1 90 1 capacitor-2.sym
{
T 44500 44200 5 10 0 0 270 2 1
device=POLARIZED_CAPACITOR
T 45500 44100 5 10 1 1 0 6 1
refdes=C2
T 44300 44200 5 10 0 0 270 2 1
symversion=0.1
T 45500 43700 5 10 1 1 0 6 1
value=1u
}
C 44900 48100 1 90 0 resistor-2.sym
{
T 44550 48500 5 10 0 0 90 0 1
device=RESISTOR
T 44600 48800 5 10 1 1 180 0 1
refdes=R2
T 44300 48400 5 10 1 1 0 0 1
value=82k
}
C 47000 45000 1 90 0 resistor-2.sym
{
T 46650 45400 5 10 0 0 90 0 1
device=RESISTOR
T 46700 45700 5 10 1 1 180 0 1
refdes=R3
T 46300 45200 5 10 1 1 0 0 1
value=150k
}
C 47600 47400 1 270 0 capacitor-1.sym
{
T 48300 47200 5 10 0 0 270 0 1
device=CAPACITOR
T 48200 47300 5 10 1 1 180 0 1
refdes=C6
T 48500 47200 5 10 0 0 270 0 1
symversion=0.1
T 48000 46600 5 10 1 1 0 0 1
value=0.02u
}
C 42800 44800 1 90 0 resistor-2.sym
{
T 42450 45200 5 10 0 0 90 0 1
device=RESISTOR
T 42500 45500 5 10 1 1 180 0 1
refdes=R1
T 42100 45100 5 10 1 1 0 0 1
value=470k
}
C 44000 44600 1 90 0 resistor-2.sym
{
T 43650 45000 5 10 0 0 90 0 1
device=RESISTOR
T 43700 45400 5 10 1 1 180 0 1
refdes=R6
T 43400 44900 5 10 1 1 0 0 1
value=680
}
C 45100 42800 1 0 1 gnd-1.sym
C 44700 44600 1 90 0 resistor-2.sym
{
T 44350 45000 5 10 0 0 90 0 1
device=RESISTOR
T 45000 45300 5 10 1 1 180 0 1
refdes=R7
T 44700 44800 5 10 1 1 0 0 1
value=1.3k
}
C 47000 46500 1 90 0 resistor-2.sym
{
T 46650 46900 5 10 0 0 90 0 1
device=RESISTOR
T 47300 47200 5 10 1 1 180 0 1
refdes=R9
T 47100 46600 5 10 1 1 0 0 1
value=470k
}
C 46500 48100 1 180 0 capacitor-1.sym
{
T 46300 47400 5 10 0 0 180 0 1
device=CAPACITOR
T 45900 48200 5 10 1 1 0 0 1
refdes=C1
T 46300 47200 5 10 0 0 180 0 1
symversion=0.1
T 46300 47600 5 10 1 1 180 0 1
value=0.02u
}
C 42400 44800 1 0 0 triode.sym
{
T 45200 47600 5 10 1 1 0 0 1
refdes=U2
T 45100 47300 5 10 1 1 0 0 1
value=12ax7
T 44800 46900 5 10 0 1 0 0 1
device=TRIODE
}
C 44600 49300 1 0 0 generic-power-1.sym
{
T 44600 49600 5 10 1 1 0 0 1
refdes=Vcc1
T 45100 49600 5 10 1 1 0 0 1
value=200V
T 44600 49300 5 10 0 0 0 0 1
device=POWER
}
N 44800 49300 44800 49000 4
N 44800 48100 44800 47600 4
N 44000 46800 42000 46800 4
N 42700 45700 42700 46800 4
N 45000 46100 45000 45500 4
N 44600 45500 45400 45500 4
N 44600 44600 45400 44600 4
N 45000 44400 45000 44600 4
N 45000 45800 43900 45800 4
N 43900 45800 43900 45500 4
N 43900 44600 43900 43500 4
N 42700 43500 46900 43500 4
N 42700 43500 42700 44800 4
N 45000 43500 45000 43100 4
N 45600 47900 44800 47900 4
N 46500 47900 47800 47900 4
N 46900 47900 46900 47400 4
N 46900 46500 46900 45900 4
N 46900 45000 46900 43500 4
N 47800 47400 47800 47900 4
N 47800 46500 47800 46200 4
N 46900 46200 48200 46200 4