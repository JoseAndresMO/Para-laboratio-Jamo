#include<stdio.h>

int num;
int x=1;
int end;

int main(){
    printf("\nTodos los divisores, de un numero\n");
    printf("Ingresar un Numero entero\n");
    scanf("%d",&num);
    printf("~\n");
    

    while(num>=x){

    

        if(num%x==0){

            printf("%d\n",x);


        }
        
       //printf("--%d--\n",x);
        x++;
    }
   printf("Insertar un numero cualquiera + enter, para terminar el programa\n");
   scanf("%d",&end);
    return 0;
}