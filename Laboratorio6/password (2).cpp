#include <stdio.h>

 int code = 1234;
 int ingresado;
 int ingresado2;
 int ingresado3;



int main() {
  
  printf("Ingresar un pin de cuatro numeros 
  scanf("%i",&ingresado);

  if(code==ingresado){

   printf("Bienvenido1\n");

  }
  else{
 
  printf("Error quedan 2 intentos\n");
 
  printf("Ingresar un pin de cuatro )\n");
  scanf("%i",&ingresado2);

 if(code==ingresado2){
 
 printf("Bienvenido2\n");

  }

 else{

 printf("Error queda un intentos\n");
 
  printf("Ingresar un pin de cuatro )\n");
  scanf("%i",&ingresado3);

 if(code==ingresado3){
 
 printf("Bienvenido3\n");

  }

 else{

 printf("Bloqueado\n");

 }

 }

 }




return 0;
}