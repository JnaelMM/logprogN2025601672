#include <stdio.h>
int main(){
const float  PAQ=12.0, PAG=0.5,P_ISR=0.1;
float salarioBT,ISR,salarioNT,totalC;
int numPAQ;
printf("Cuantos paquetes hiciste? ");
scanf ("%d",&numPAQ);

   salarioBT=numPAQ*PAG;
   ISR=salarioBT*P_ISR;
   salarioNT= salarioBT-ISR;
   totalC=numPAQ*PAG;
   printf("salarioBT:%f\n",salarioBT);
   printf("ISR:%f\n",ISR);
   printf("salarioNT:%f\n",salarioNT);
   printf("totalC:%f\n",totalC);
   return 0;
}
