#include <stdio.h>
int main(){
int IMC, PESO, altura;

printf("INGRESA TU ALTURA EN m/n");
scanf("%f",&altura);
printf( "INGRESA TU PESO EN KILOGRAMOS/n");
scanf("%f",&PESO);
IMC=PESO/(altura*altura);

 if (IMC>=40){
printf("TIENE OBESIDAD 3");
}
else{ if ( IMC>=35 && IMC<=39.9){
printf("TIENE OBESIDAD 2");
}
else{if ( IMC>=30 &&  IMC<=34.9){
printf("TIENE OBESIDAD 1");
}
else{if (IMC>=25 && IMC<=29.9 ){
printf("TIENE SOBREPESO");
}
else{if (IMC>=18.5 && IMC<=24.9 ){
printf("TIENE UN PESO NORMAL");
}
else { if(IMC<=18){
printf("TIENE UN BAJO PESO");
}
else{
printf("ilogico");
}
}
}
}
}
}
return 0;
}






