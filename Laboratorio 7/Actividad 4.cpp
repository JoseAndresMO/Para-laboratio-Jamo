#include<stdio.h>

int num; 
int x = 0;
int z = 1;

int main() {
	
	printf("Sucecion de numeros primos\n");
	printf("Ingresar algun numero entero para ver los numeros primos antecesores\n");
	scanf("%d",&num);
	
    printf("~~~\n");
	
    while(z<=num){
        
        //printf("~~Chequeo de numero~~\n");

        for(int i=1; i<=z; i++){  
			
             if(z%i==0){ 
			 //recorido de numeros
			 x++;  
             //printf("~%d~\n",x);
			
            }
		}	

       
	    if(x==2){
		 //Impresion de numero
		  printf("%d\n",z);
		  x=0;
		 //printf("--%d--\n",x);

		  }
        else{
			x=0;	
            
			}

		


        z++;
    }
    
     //printf("TRY 15");
	 
     
     return 0;
	 
	}