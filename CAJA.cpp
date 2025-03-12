#include <stdio.h>

int main ()
{ int x,y;
    x=2 ;
    y=7 ;
     float A,B,C;
     A= x*(y+1.0/3);
     B=x+y;
     C=x*x+y*y;
     float z =1.0/2*(A/B)+C;
     printf( "EL VALOR DE Z ES: %f",z);
     return 0;

}
