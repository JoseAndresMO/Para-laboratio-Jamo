#include <stdio.h>

int num1;
int num2;
int suma;

int main() {
 printf("Proceso de suma\n");
 printf("Ingresar el primer numero\n");
 scanf("%d",&num1);

 printf("Ingresar el segundo numero\n"); 
 scanf("%d",&num2);

 suma=num1+num2;
 printf("La suma es:%d\n",suma);
return 0; 


}