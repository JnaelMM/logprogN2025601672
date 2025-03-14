#include <stdio.h>
int main(){
const float  IVA = 0.16, m2 = 9256.00;
float costTer,tamTer,costReal;


printf("¿Cuanto pago don Jose?");
scanf ("%f",&tamTer);


costTer=tamTer * m2;
costReal= costTer + (costTer*IVA);
printf("costo del terreno:%.2f\n",costTer);
printf(" total a pagar con IVA:%.2f\n", costReal);

return 0;
}
