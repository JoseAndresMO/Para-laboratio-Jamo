#include<stdio.h>
#include"libreriaGato.h"
/*
void menu(); //uso
void ganador1();// uso no nesesario
void ganador2();// uso no nesesario
void imprimirTablero(char tablero[3][3]);//uso
int ingresarFila(int fila);//uso
int ingresarColumna(int columna);//uso
int revisar1(char tablero[3][3]); //uso
int revisar2(char tablero[3][3]); //uso

void jugada1(char tablero[3][3]);
void jugada2(char tablero[3][3]);
*/
/*
char tablero[3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};

char fila;
char columna;
int ganador=0; //variable que determina si hay gandador o no
int contador=0;
*/
/*
       0 1 2
      ______ 
   0 | - - -
   1 | - - -
   2 | - - -


*/
int ganador=0; 
int contador=0;
char tablero[3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};
int fila;
int columna;

int main(){

   menu();

 while(ganador<1){// hasta que uno gane
     
    //-----------JUGADOR 1--------------
    jugada1(tablero,&contador,&fila,&columna);
    imprimirTablero(tablero);
    
    ganador=revisar1(tablero); 
    if(ganador==2){
        break;
   }
   if(contador==9){
    printf("Impate \n\n");
    break;
   }
  //-----------JUGADOR 2--------------  
      if(contador==9){break;
     }
     
    jugada2(tablero,&contador,&fila,&columna);
    
 // Impresion del tablero
    imprimirTablero(tablero);
    ganador=revisar2(tablero);
   if(ganador==2){
        break;
   }
    if(contador==9){
    printf("Impate \n\n");
    break;
 }
 }
 
 void cierre();
 return 0;
}
/*
void menu(){
    printf("\n\nEl Gato(Juego)\n\n");
    printf("Funcionamiento de posiciones(cordenadas)\n");
    printf("    0 1 2\n  _______\n0 | - - -\n1 | - - -\n2 | - - -\n\n");
}

void jugador1Ingreso(){
        printf("JUGADOR 1\n\n");
        
}

void imprimirTablero(char tablero[3][3]){ 
        printf("Tablero\n");
        for(int i = 0 ; i < 3 ; i++){ // FILAS
            for(int j = 0 ; j < 3 ; j++){ // COLUMNAS (ELEMENTOS);
                printf("%c ", tablero[i][j]);
                }
            printf("\n");
        }
        printf("\n\n");

}

void ganador1(){
printf("JUGADOR 1 HA GANADO \n\n");
}

void ganador2(){
printf("JUGADOR 2 HA GANADO \n\n");
}
     
int revisar1(char tablero[3][3]){
    int g = 1;

 if(tablero[0][0]==tablero[0][1] && tablero[0][0]==tablero[0][2]){
         //chequeo si son 0
         if(tablero[0][0]=='-'){
            g=1;
         }
        else{
            
           
            ganador1();
            g=2;



        }//Ganador
     }
     
     //fila 1
      if(tablero[1][0]==tablero[1][1] && tablero[1][0]==tablero[1][2]){
         //chequeo si son 0
         if(tablero[1][0]=='-'){
          g=1;   
         }
        else{
            
            ganador1();
           g=2;



        }//Ganador
        }
    //fila 2
     if(tablero[2][0]==tablero[2][1] && tablero[2][1]==tablero[2][2]){
         //chequeo si son 0
         if(tablero[2][0]=='-'){
            g=1; 
         }
        else{

           
            ganador1();
           g=2; 




        }//Ganador
     }
    
    
    
     //Revcion V (ABAJO)
     //columna 0
     if(tablero[0][0]==tablero[1][0] && tablero[0][0]==tablero[2][0]){
         //chequeo si son 0
         if(tablero[0][0]=='-'){
            g=1;   
         }
        else{

           
            ganador1();
            
            g=2;

        }//Ganador
     }
     
     //columna 1
      if(tablero[0][1]==tablero[1][1] && tablero[0][1]==tablero[2][1]){
         //chequeo si son 0
         if(tablero[0][1]=='-'){
                g=1;
         }
      
        else{


            ganador1();
           g=2;


        }//Ganador
      }
    //columna 2
     if(tablero[0][2]==tablero[1][2] && tablero[0][2]==tablero[2][2]){
         //chequeo si son 0
         if(tablero[0][2]=='-'){

         g=1;
         }
        else{

           
            ganador1();
            g=2;



        }//Ganador
     }  
  //Revcion Diagonal --->

     if(tablero[0][0]==tablero[1][1] && tablero[0][0]==tablero[2][2]){
         //chequeo si son 0
         if(tablero[0][0]=='-'){
           g=1;    
         }
         
        else{

            ganador1();
            g=2;


        }//Ganador
     }
 //Revcion Diagonal <----

     if(tablero[0][2]==tablero[1][1] && tablero[0][2]==tablero[2][0]){
         //chequeo si son 0
         if(tablero[0][2]=='-'){
             g=1;
         }
        else{

            
            ganador1();
            g=2;


        }//Ganador
       }
 if(g==1){
    // printf("return 1\n");
     return 0;

 }else{
     //printf("return 2\n");
     return 1;
     
     }   


}    

int revisar2(char tablero[3][3]){
 int g = 1;

 if(tablero[0][0]==tablero[0][1] && tablero[0][0]==tablero[0][2]){
         //chequeo si son 0
         if(tablero[0][0]=='-'){
            g=1;
         }
        else{
            
           
            ganador2();
            g=2;



        }//Ganador
     }
     
     //fila 1
      if(tablero[1][0]==tablero[1][1] && tablero[1][0]==tablero[1][2]){
         //chequeo si son 0
         if(tablero[1][0]=='-'){
          g=1;   
         }
        else{
            
            ganador2();
           g=2;



        }//Ganador
        }
    //fila 2
     if(tablero[2][0]==tablero[2][1] && tablero[2][1]==tablero[2][2]){
         //chequeo si son 0
         if(tablero[2][0]=='-'){
            g=1; 
         }
        else{

           
            ganador2();
           g=2; 




        }//Ganador
     }
    
    
    
     //Revcion V (ABAJO)
     //columna 0
     if(tablero[0][0]==tablero[1][0] && tablero[0][0]==tablero[2][0]){
         //chequeo si son 0
         if(tablero[0][0]=='-'){
            g=1;   
         }
        else{

           
            ganador2();
            
            g=2;

        }//Ganador
     }
     
     //columna 1
      if(tablero[0][1]==tablero[1][1] && tablero[0][1]==tablero[2][1]){
         //chequeo si son 0
         if(tablero[0][1]=='-'){
                g=1;
         }
      
        else{


            ganador2();
           g=2;


        }//Ganador
      }
    //columna 2
     if(tablero[0][2]==tablero[1][2] && tablero[0][2]==tablero[2][2]){
         //chequeo si son 0
         if(tablero[0][2]=='-'){

         g=1;
         }
        else{

           
            ganador2();
            g=2;



        }//Ganador
     }  
  //Revcion Diagonal --->

     if(tablero[0][0]==tablero[1][1] && tablero[0][0]==tablero[2][2]){
         //chequeo si son 0
         if(tablero[0][0]=='-'){
           g=1;    
         }
         
        else{

            ganador2();
            g=2;


        }//Ganador
     }
 //Revcion Diagonal <----

     if(tablero[0][2]==tablero[1][1] && tablero[0][2]==tablero[2][0]){
         //chequeo si son 0
         if(tablero[0][2]=='-'){
             g=1;
         }
        else{

            
            ganador2();
            g=2;


        }//Ganador
       }
 if(g==1){
    // printf("return 1\n");
     return 0;

 }else{
     //printf("return 2\n");
     return 1;
     
     }   


}    

int ingresarFila(int fila){

printf("Ingresar Cordenadas de Fila\n");
scanf("%d",&fila);

return fila;
}
int ingresarColumna(int columna){
int c;
printf("Ingresar Cordenadas de Columna\n");
scanf("%d",&columna);
return columna;
}

void jugada1(char tablero[3][3]){

 while(1){
            
            
            printf("JUGADOR 1\n\n");
            
            fila=ingresarFila(fila);
            columna=ingresarColumna(columna);
            
            
             if(tablero[fila][columna]=='-'){// Ve si la pos esta ocupada
    
                tablero[fila][columna]='x'; // Pone "x" en la pos elegida
                contador++;
             break;
            }
             else{
            printf("La posicion ya esta ocupada elegir otra posicion\n");  
            }

       }



}

void jugada2(char tablero[3][3]){
    while(1){
            printf("JUGADOR 2\n\n");
            
            fila=ingresarFila(fila);
            columna=ingresarColumna(columna);

             if(tablero[fila][columna]=='-'){// Ve si la pos esta ocupada
    
                tablero[fila][columna]='o'; // Pone "1" en la pos elegida
                contador++;
             break;
            }
             else{
            printf("La posicion ya esta ocupada elegir otra posicion\n");  
            }

       }

}
*/