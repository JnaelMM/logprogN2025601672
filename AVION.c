#include <stdio.h>
#include <math.h>

    int main()
{


int L= 2;
float J= (1.0 / 4.0) * L;
float M=(1.0 / 2.0)*L;
float A=(3.0/2.0)*L;
float E1= sqrt((A * A) + (L * L));
float T=(A*L/2.0);
float I=(2 *L)*J;
float E2=sqrt((L * L) + (L * L));
float S=(L*L )/2.0;


float PT = (2 * J) + (2 * L) + (2 * M) +(2*E2) +E1  + A;
float AT=(2 * S) + (L * L) + I+ T;

printf( "EL PERIMETRO TOTAL ES:%.2f\n", PT);
printf("EL AREA TOTAL ES: %.2f\n", AT);
return 0;

}

