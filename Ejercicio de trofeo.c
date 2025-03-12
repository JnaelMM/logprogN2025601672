#include <stdio.h>
#include <math.h>

int main(){
int L= 7;
float p= 3.1416;

float A= 3*L*L;
float B=3*L*L/2.0;
float AT =(2*A)+(2*B)+p*pow(3*L/2.0,2)/2.0;
printf( "EL AT ES:% f\n", AT);


float a= p*(3*L/2.0);
float b=sqrt(pow(3*L ,2) +pow(L,2));
float PT= a+ 2 * sqrt(pow(3*L,2) +pow(L,2))+(7*L);
printf( "EL PT ES:%.4f\n", PT);

return 0;


}




