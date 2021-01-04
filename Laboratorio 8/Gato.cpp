#include<stdio.h>

char tablero[3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};

char fila;
char columna;

int g=1;
int contador=0;

/*
       0 1 2
      ______ 
   0 | - - -
   1 | - - -
   2 | - - -


*/

int main(){

    printf("El Gato(Juego)\n\n");
    
    printf("Funcionamiento de posiciones(cordenadas)\n");
    printf("    0 1 2\n  _______\n0 | - - -\n1 | - - -\n2 | - - -\n\n");





 

 while(g<=2){// hasta que uno gane
     
     if(contador==9){break;
     }
        //-----------JUGADOR 1--------------
       while(1){
            printf("JUGADOR 1\n\n");
            
            printf("Ingresar Cordenadas ~  Fila,Columna ~  \n");
            scanf("%d,%d",&fila,&columna);
            /*
            printf("Elegir posicion de FILA\n");
            scanf("%d",&fila);
    
            printf("Elegir posicion de COLUMNA\n");
            scanf("%d",&columna);
            */
             if(tablero[fila][columna]=='-'){// Ve si la pos esta ocupada
    
                tablero[fila][columna]='x'; // Pone "1" en la pos elegida
                contador++;
             break;
            }
             else{
            printf("La posicion ya esta ocupada elegir otra posicion\n");  
            }

       }
       

         
  
 
    printf("\n\n");
    // Impresion del tablero
    printf("Tablero\n");
        for(int i = 0 ; i < 3 ; i++){ // FILAS
            for(int j = 0 ; j < 3 ; j++){ // COLUMNAS (ELEMENTOS);
                printf("%c ", tablero[i][j]);
                }
            printf("\n");
        }
    printf("\n\n");

 // if(){ //revisar victoria}
     
     //Revcion----->
     //fila 0
    if(tablero[0][0]==tablero[0][1] && tablero[0][0]==tablero[0][2]){
         //chequeo si son 0
         if(tablero[0][0]=='-'){
            
         }
        else{

            g++;
            printf("JUGADOR 1 HA GANADO \n\n");
            break;



        }//Ganador
     }
     
     //fila 1
      if(tablero[1][0]==tablero[1][1] && tablero[1][0]==tablero[1][2]){
         //chequeo si son 0
         if(tablero[1][0]=='-'){
             
         }
        else{
            g++;
            printf("JUGADOR 1 HA GANADO\n\n");
            break;



        }//Ganador
        }
    //fila 2
     if(tablero[2][0]==tablero[2][1] && tablero[2][1]==tablero[2][2]){
         //chequeo si son 0
         if(tablero[2][0]=='-'){
            
         }
        else{

            g++;
            printf("JUGADOR 1 HA GANADO\n\n");
            break;



        }//Ganador
     }
    
    
    
     //Revcion V (ABAJO)
     //columna 0
     if(tablero[0][0]==tablero[1][0] && tablero[0][0]==tablero[2][0]){
         //chequeo si son 0
         if(tablero[0][0]=='-'){
             
         }
        else{

            g++;
            printf("JUGADOR 1 HA GANADO\n\n");
            break;


        }//Ganador
     }
     
     //columna 1
      if(tablero[0][1]==tablero[1][1] && tablero[0][1]==tablero[2][1]){
         //chequeo si son 0
         if(tablero[0][1]=='-'){
             
         }
      
        else{


            g++;
            printf("JUGADOR 1 HA GANADO\n\n");
            break;


        }//Ganador
      }
    //columna 2
     if(tablero[0][2]==tablero[1][2] && tablero[0][2]==tablero[2][2]){
         //chequeo si son 0
         if(tablero[0][2]=='-'){
             
         
         }
        else{

            g++;
            printf("JUGADOR 1 HA GANADO\n\n");
            break;



        }//Ganador
     }  
  //Revcion Diagonal --->

     if(tablero[0][0]==tablero[1][1] && tablero[0][0]==tablero[2][2]){
         //chequeo si son 0
         if(tablero[0][0]=='-'){
             
         }
         
        else{

            g++;
            printf("JUGADOR 1 HA GANADO\n\n");
            break;


        }//Ganador
     }
 //Revcion Diagonal <----

     if(tablero[0][2]==tablero[1][1] && tablero[0][2]==tablero[2][0]){
         //chequeo si son 0
         if(tablero[0][2]=='-'){
             
         }
        else{

            g++;
            printf("JUGADOR 1 HA GANADO\n\n");
            break;


        }//Ganador
       }










  //-----------JUGADOR 2--------------
     
      if(contador==9){break;
     }
     while(1){
            printf("JUGADOR 2\n\n");
            
            printf("Ingresar Cordenadas ~  Fila,Columna ~  \n");
            scanf("%d,%d",&fila,&columna);
           /* 
            printf("Elegir posicion de FILA\n");
            scanf("%d",&fila);
    
            printf("Elegir posicion de COLUMNA\n");
            scanf("%d",&columna);
            */
             if(tablero[fila][columna]=='-'){// Ve si la pos esta ocupada
    
                tablero[fila][columna]='o'; // Pone "1" en la pos elegida
                contador++;
             break;
            }
             else{
            printf("La posicion ya esta ocupada elegir otra posicion\n");  
            }

       }
        
 // Impresion del tablero
    printf("Tablero\n");
        for(int i = 0 ; i < 3 ; i++){ // FILAS
            for(int j = 0 ; j < 3 ; j++){ // COLUMNAS (ELEMENTOS);
                printf("%c ", tablero[i][j]);
                }
            printf("\n");
        }
        printf("\n\n");
        
    
        // if(){ //revisar victoria}
 //Revcion----->
     //fila 0
      if(tablero[0][0]==tablero[0][1] && tablero[0][0]==tablero[0][2]){
         //chequeo si son 0
         if(tablero[0][0]=='-'){
            
         }
        else{

            g++;
            printf("JUGADOR 2 HA GANADO\n\n");
            break;



        }//Ganador
     }
     
     //fila 1
      if(tablero[1][0]==tablero[1][1] && tablero[1][0]==tablero[1][2]){
         //chequeo si son 0
         if(tablero[1][0]=='-'){

         }
        else{
            g++;
            printf("JUGADOR 2 HA GANADO\n\n");
            break;



        }//Ganador
        }
    //fila 2
     if(tablero[2][0]==tablero[2][1] && tablero[2][1]==tablero[2][2]){
         //chequeo si son 0
         if(tablero[2][0]=='-'){

         }
        else{

            g++;
            printf("JUGADOR 2 HA GANADO\n\n");
            break;



        }//Ganador
     }
    
    
    
     //Revcion V (ABAJO)
     //columna 0
     if(tablero[0][0]==tablero[1][0] && tablero[0][0]==tablero[2][0]){
         //chequeo si son 0
         if(tablero[0][0]=='-'){

         }
        else{

            g++;
            printf("JUGADOR 2 HA GANADO\n\n");
            break;


        }//Ganador
     }
     
     //columna 1
      if(tablero[0][1]==tablero[1][1] && tablero[0][1]==tablero[2][1]){
         //chequeo si son 0
         if(tablero[0][1]=='-'){

         }
      
        else{


            g++;
            printf("JUGADOR 2 HA GANADO\n\n");
            break;


        }//Ganador
      }
    //columna 2
     if(tablero[0][2]==tablero[1][2] && tablero[0][2]==tablero[2][2]){
         //chequeo si son 0
         if(tablero[0][2]=='-'){

         
         }
        else{

            g++;
            printf("JUGADOR 2 HA GANADO\n\n");
            break;



        }//Ganador
     }  
  //Revcion Diagonal --->

     if(tablero[0][0]==tablero[1][1] && tablero[0][0]==tablero[2][2]){
         //chequeo si son 0
         if(tablero[0][0]=='-'){

         }
         
        else{

            g++;
            printf("JUGADOR 2 HA GANADO\n\n");
            break;


        }//Ganador
     }
 //Revcion Diagonal <----

     if(tablero[0][2]==tablero[1][1] && tablero[0][2]==tablero[2][0]){
         //chequeo si son 0
         if(tablero[0][2]=='-'){

         }
        else{

            g++;
            printf("JUGADOR 2 HA GANADO\n\n");
            break;


        }//Ganador
       }


    

   


 }
 if(contador==9){
printf("Impate \n\n");
 }

 return 0;
}
     