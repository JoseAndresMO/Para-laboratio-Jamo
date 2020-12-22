#include<stdio.h>

int num;
int resultado;
int num1 = 0;
int num2 = 1;

int main(){
    printf("Fibonacci\n");
    printf("Ingresar la cantidad de numeros Fibonacci que usted quiere, menor a 45\n");
    scanf("%d",&num);
    printf("~~~\n");

        while(1){
            if(num>=45){
                printf("ERROR\n");
                printf("Ingresar la cantidad de numeros Fibonacci que usted quiere, menor a 45\n");
                scanf("%d",&num);


            }
            else{
                break;
            }

        }

        switch (num){
            
           case 1: printf("En 1 corresponde a :0\n");
                   break;
           case 2: printf("En 1 corresponde a :0\n");
                   printf("En 0 corresponde a :1\n");         
                   break;


           default:
             printf("En 1 corresponde a :0\n");
             for(int i = 0;i<=num-2;i++){
    
             resultado=num1+num2;
             printf("EN %d corresponde a :%d\n",i+2,resultado); 
             //printf("~num1~%d\n",num1); 
             //printf("~num2~%d\n",num2); 
            
             num2=num1;
             num1=resultado;
             

            }

        }
        
    return 0;
}
