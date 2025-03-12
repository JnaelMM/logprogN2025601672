#include <stdio.h>
#include <math.h>
int main()
{
    float L= 7;
    float L2= (1.0/ 5.0)* L;
    float L3=(3.0/ 5.0)* L;
    float L4=(1.0/2.0)*L;
    float C= (1.0/2.0*3.1416)*pow(L4,2);
    float T= L*L;
    float B=L2*L3*2;
    float P=L2*L2*2;
    float S=B+P+C+T;

    printf( "EL AT ES:% f\n", S);
    float PT= (L2*17) + (L3*2)+ (3.1416*L4);
    printf( "EL PT ES:% f\n", PT);
     return 0;
}

