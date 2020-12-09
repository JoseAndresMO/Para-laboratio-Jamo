#include <stdio.h>

float num1;
float num2;
float resultado;

int main() {
 
printf("Multiplicacion de dos numero reales\n");
printf("Ingresar dos numeros decimales de la sigente manera:\n");
printf("x.y,n.m \n");
printf("Ingresar los dos numeros\n");
scanf("%f,%f",&num1,&num2);


resultado=num1*num2;

printf("El resultado de la multiplicacion es:%f\n",resultado);


return 0; 
}