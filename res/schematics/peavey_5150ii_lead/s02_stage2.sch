v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 40200 45700 1 0 0 input-1.sym
{
T 40200 46000 5 10 0 0 0 0 1
device=INPUT
T 40200 45700 5 10 1 1 0 0 1
refdes=IN1
}
C 49400 45500 1 180 1 output-1.sym
{
T 49500 45200 5 10 0 0 180 6 1
device=OUTPUT
T 49600 45500 5 10 1 1 180 6 1
refdes=OUT1
}
C 48000 43300 1 90 1 capacitor-2.sym
{
T 47300 43100 5 10 0 0 270 2 1
device=POLARIZED_CAPACITOR
T 48300 43000 5 10 1 1 0 6 1
refdes=C2
T 47100 43100 5 10 0 0 270 2 1
symversion=0.1
T 48200 42600 5 10 1 1 0 6 1
value=1u
}
C 42500 43900 1 90 0 resistor-2.sym
{
T 42150 44300 5 10 0 0 90 0 1
device=RESISTOR
T 42200 44600 5 10 1 1 180 0 1
refdes=R2
T 41900 44200 5 10 1 1 0 0 1
value=1M
}
C 45200 44900 1 90 0 resistor-2.sym
{
T 44850 45300 5 10 0 0 90 0 1
device=RESISTOR
T 44900 45700 5 10 1 1 180 0 1
refdes=R3
T 44700 45000 5 10 1 1 0 0 1
value=1M
}
C 44100 45800 1 270 0 capacitor-1.sym
{
T 44800 45600 5 10 0 0 270 0 1
device=CAPACITOR
T 44200 45600 5 10 1 1 180 0 1
refdes=C5
T 45000 45600 5 10 0 0 270 0 1
symversion=0.1
T 43900 45000 5 10 1 1 0 0 1
value=1n
}
C 49100 45600 1 180 0 capacitor-1.sym
{
T 48900 44900 5 10 0 0 180 0 1
device=CAPACITOR
T 48300 45500 5 10 1 1 0 0 1
refdes=C3
T 48900 44700 5 10 0 0 180 0 1
symversion=0.1
T 49200 45700 5 10 1 1 180 0 1
value=1n
}
C 47400 45800 1 90 0 resistor-2.sym
{
T 47050 46200 5 10 0 0 90 0 1
device=RESISTOR
T 47100 46500 5 10 1 1 180 0 1
refdes=R1
T 46700 46100 5 10 1 1 0 0 1
value=100k
}
C 46200 44500 1 180 0 resistor-2.sym
{
T 45800 44150 5 10 0 0 180 0 1
device=RESISTOR
T 45500 44600 5 10 1 1 0 0 1
refdes=R4
T 46000 44200 5 10 1 1 180 0 1
value=470k
}
C 47000 41600 1 0 1 gnd-1.sym
C 47000 42400 1 90 0 resistor-2.sym
{
T 46650 42800 5 10 0 0 90 0 1
device=RESISTOR
T 47300 43100 5 10 1 1 180 0 1
refdes=R7
T 47100 42600 5 10 1 1 0 0 1
value=82k
}
C 42100 46000 1 180 0 capacitor-1.sym
{
T 41900 45300 5 10 0 0 180 0 1
device=CAPACITOR
T 41300 45900 5 10 1 1 0 0 1
refdes=C1
T 41900 45100 5 10 0 0 180 0 1
symversion=0.1
T 41600 45500 5 10 1 1 180 0 1
value=470p
}
C 43300 43900 1 270 1 resistor-variable-2.sym
{
T 44200 44700 5 10 0 1 90 2 1
device=VARIABLE_RESISTOR
T 43050 44600 5 10 1 1 180 6 1
refdes=P1
T 45100 44200 5 10 1 1 180 0 1
value=value=1M,var=gain
}
C 44900 42400 1 0 0 triode.sym
{
T 46700 44900 5 10 1 1 0 0 1
refdes=U2
T 47600 44900 5 10 1 1 0 0 1
value=12ax7
T 47300 44500 5 10 0 1 0 0 1
device=TRIODE
}
C 47100 47000 1 0 0 generic-power-1.sym
{
T 47100 47300 5 10 1 1 0 0 1
refdes=Vcc1
T 47600 47300 5 10 1 1 0 0 1
value=340V
T 47100 47000 5 10 0 0 0 0 1
device=POWER
}
N 41000 45800 41200 45800 4
N 42100 45800 45100 45800 4
N 42400 44800 42400 45800 4
N 43400 44800 43400 45800 4
N 42400 42400 47800 42400 4
N 46900 42400 46900 41900 4
N 43400 42400 43400 43900 4
N 42400 42400 42400 43900 4
N 43900 44400 45300 44400 4
N 46200 44400 46500 44400 4
N 47500 43700 47500 43300 4
N 46900 43300 47800 43300 4
N 45100 44900 45100 44400 4
N 44300 44900 44300 44400 4
N 47300 45800 47300 45200 4
N 47300 47000 47300 46700 4
N 48200 45400 47300 45400 4
N 49100 45400 49400 45400 4