#include<stdio.h>

int num1;
int num2;
int resultado = 0;

int main(){

    printf("Multiplicacion de dos numeros\n");
    printf("Ingresar los dos numeros saparado por una coma (,)\n");
    scanf("%d,%d",&num1,&num2);
    //scanf("%d",&num1);
    

    printf(" num1 = %d\n num2 = %d\n\n",num1,num2);

   
 
    while(num1>0){


        resultado=resultado+num2;
        num1--;

    }

    printf("El resultado de la multiplicacion es: %d\n",resultado);


    //printf("TRY 9");
   
    return 0;
}