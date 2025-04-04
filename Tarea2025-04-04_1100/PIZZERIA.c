#include <stdio.h>
int main()
{

int PIZZA, VEGETARIANA , NOVEG ;
printf("que tipo de pizza deseas\n");
printf("pizza vegetariana 1\n");
printf("pizza  no vegetariana 2\n");
scanf("%d",&PIZZA);
 if (PIZZA==1){

 printf( "que ingrediente deseas agregar\n");
 printf("pimiento 1\n");
 printf("tofu 2\n");
scanf("%d",&VEGETARIANA);
 if (VEGETARIANA == 1){
printf( "ESCOGIO LA PIZZA VEGETARIANA LA CUAL TIENE DE INGREDIENTES TOMATE, MOZZARELLA Y PIMIENTO\n");
 }
else{
    printf( "ESCOGIO LA PIZZA VEGETARIANA LA CUAL TIENE DE INGREDIENTES TOMATE, MOZZARELLA Y TOFU\n");
}
 }
 if (PIZZA==2){
 printf( "que ingrediente deseas agregar\n");
 printf("JAMON 5\n");
 printf("PEPERONI 3\n");
 printf("SALMON 10\n");
 scanf("%d",&NOVEG);

 if (NOVEG==5){
 printf( "ESCOGIO LA PIZZA  NO VEGETARIANA LA CUAL TIENE DE INGREDIENTES TOMATE, MOZZARELLA Y JAMON\n");
 }
 else if (NOVEG==3){
 printf( "ESCOGIO LA PIZZA  NO VEGETARIANA LA CUAL TIENE DE INGREDIENTES TOMATE, MOZZARELLA Y PEPERONI\n");
 }

 else{
 printf( "ESCOGIO LA PIZZA  NO VEGETARIANA LA CUAL TIENE DE INGREDIENTES TOMATE, MOZZARELLA Y SALMON\n");
 }
 }
 return 0;

}





