#include<stdio.h>
int suma = 0;
int num;
int num2;

int main(){

    printf("Sumatoria de numeros positivos\n");
    printf("Ingresar un numero\n");
        scanf("%d",&num);

     while(1){

        printf("Ingresar otro numero\n");
        scanf("%d",&num2);

        if(num2<=0){
            break;

        }
        else{
            suma=num+num2;
            num=suma;

        }

        printf("El total es:%d\n",suma);

    }

    printf("ERROR\n",suma);


    return 0;
}

