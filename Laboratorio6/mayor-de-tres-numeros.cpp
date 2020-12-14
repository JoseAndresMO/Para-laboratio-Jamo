#include <stdio.h>


float num1;
float num2;
float num3;


int main() {
 
 printf("Cual de los tres numero es mayor\n");

 printf("Tres numeros differentes\n");
 
 printf("Ingresar el primer numero\n");
 scanf("%f",&num1);

 printf("Ingresar el segundo numero\n");
 scanf("%f",&num2);

 printf("Ingresar el tercer numero\n");
 scanf("%f",&num3);


 if(num1>num2 && num1>num3){
 
 printf("El numero %f es el mayor\n",num1);
 

 }
 else if(num2>num1 && num2>num3){

 printf("El numero %f es el mayor\n",num2);


 }

 else if(num3>num1 && num3>num2){

 printf("El numero %f es el mayor\n",num3);


 }


 return 0;

}