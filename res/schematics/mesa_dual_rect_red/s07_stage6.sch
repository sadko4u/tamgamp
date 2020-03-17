v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 41000 46000 1 0 0 input-1.sym
{
T 41000 46300 5 10 0 0 0 0 1
device=INPUT
T 41000 46000 5 10 1 1 0 0 1
refdes=IN1
}
C 46900 47300 1 180 1 output-1.sym
{
T 47000 47000 5 10 0 0 180 6 1
device=OUTPUT
T 47100 47300 5 10 1 1 180 6 1
refdes=OUT1
}
C 45500 45000 1 90 1 capacitor-2.sym
{
T 44800 44800 5 10 0 0 270 2 1
device=POLARIZED_CAPACITOR
T 45800 44700 5 10 1 1 0 6 1
refdes=C2
T 44600 44800 5 10 0 0 270 2 1
symversion=0.1
T 45800 44200 5 10 1 1 0 6 1
value=2.2u
}
C 43500 44100 1 90 0 resistor-2.sym
{
T 43150 44500 5 10 0 0 90 0 1
device=RESISTOR
T 43200 44800 5 10 1 1 180 0 1
refdes=R2
T 42900 44400 5 10 1 1 0 0 1
value=47k
}
C 44400 44100 1 90 0 resistor-2.sym
{
T 44050 44500 5 10 0 0 90 0 1
device=RESISTOR
T 44100 44900 5 10 1 1 180 0 1
refdes=R3
T 43800 44400 5 10 1 1 0 0 1
value=2.2k
}
C 43000 46200 1 180 0 resistor-2.sym
{
T 42600 45850 5 10 0 0 180 0 1
device=RESISTOR
T 42500 46300 5 10 1 1 0 0 1
refdes=R8
T 42700 45900 5 10 1 1 180 0 1
value=3.3k
}
C 44700 47500 1 90 0 resistor-2.sym
{
T 44350 47900 5 10 0 0 90 0 1
device=RESISTOR
T 44400 48300 5 10 1 1 180 0 1
refdes=R6
T 44100 47800 5 10 1 1 0 0 1
value=120k
}
C 43500 43100 1 0 1 gnd-1.sym
C 46400 47400 1 180 0 capacitor-1.sym
{
T 46200 46700 5 10 0 0 180 0 1
device=CAPACITOR
T 45600 47300 5 10 1 1 0 0 1
refdes=C1
T 46200 46500 5 10 0 0 180 0 1
symversion=0.1
T 46200 46900 5 10 1 1 180 0 1
value=0.047u
}
C 42200 44100 1 0 0 triode.sym
{
T 45000 46900 5 10 1 1 0 0 1
refdes=U2
T 44900 46600 5 10 1 1 0 0 1
value=12ax7
T 44600 46200 5 10 0 1 0 0 1
device=TRIODE
}
C 44400 48800 1 0 0 generic-power-1.sym
{
T 44400 49100 5 10 1 1 0 0 1
refdes=Vcc1
T 44900 49100 5 10 1 1 0 0 1
value=422V
T 44400 48800 5 10 0 0 0 0 1
device=POWER
}
N 41800 46100 42100 46100 4
N 43000 46100 43800 46100 4
N 43400 45000 43400 46100 4
N 44800 45400 44800 45000 4
N 44300 45000 45300 45000 4
N 43400 44100 43400 43400 4
N 44300 44100 44300 43700 4
N 45300 44100 45300 43700 4
N 44600 48800 44600 48400 4
N 44600 47500 44600 46900 4
N 45500 47200 44600 47200 4
N 46400 47200 46900 47200 4
N 43400 43700 45300 43700 4