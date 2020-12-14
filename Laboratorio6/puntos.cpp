#include <stdio.h>

int precio;
int codigo;
int puntos; 
int pagar;
int continuar;




int main() {
  
printf("Acumulacion de puntos\n");

printf("cuanto puntos tienes?\n");
scanf("%d",&puntos);

printf("Ingresar codigo numerico\n");
scanf("%d",&codigo);

printf("Ingresar precio\n");
scanf("%d",&precio);

printf("Desea pagar con puntos?\n");
printf("Si = 1, No = 0\n");
scanf("%d",&pagar);

if(pagar==0){
 
 //proceso de puntos


 if(100<=codigo && codigo<200){

  if(precio>=10000){
 
    //suma 1 punto por cada 50 pesos
   puntos = puntos+precio/50;
    //printf("//suma 1 punto por cada 50 pesos\n");
    
   }

   else{

   //suma 1 punto por cada 100 pesos
   puntos = puntos+precio/100;
  
   //printf("//suma 1 punto por cada 100 pesos\n");

  }
  //division
 
 }
else{ 
  if(precio>=10000){
 
   //suma 1 punto por cada 30 pesos
   puntos = puntos+precio/30;
   //printf("//suma 1 punto por cada 30\n ");
   
   
   
   }

   else{

   //suma 1 punto por cada 50 pesos
   //printf("//suma 1 punto por cada 50 pesos parte 2.\n");
   
   puntos = puntos+precio/100;
   }


  }

 }
 
 //pago
 
 
 else{
   
   if(precio<=10*puntos){

   //se le restan los puntos
    
    puntos=puntos-precio/10;


   printf("Aprovado\n");

   }
   
   else{

   printf("Denegado\n");

   } 
   
  }


  printf("Continuar, Cancelar o terminar?\n");
  printf(" Continua = 1, Cancelar = 0, Terminar(por si eligio puntos) = 3\n");
  scanf("%d",&continuar);



  if(continuar==1){

 printf("Aprovado\n");

  }
 
  else if(continuar==0){

  printf("Cancelado\n");

  }

 printf("Usted tiene %d puntos\n",puntos);




return 0;
}