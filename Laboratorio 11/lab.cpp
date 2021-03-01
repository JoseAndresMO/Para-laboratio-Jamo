#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void ruta(char nombre_archivo[15], char path[100]); //Desafio 2


int main(){
    FILE* archivo;
    char path[100];
    char nombre_archivo[15];
    char caracter[2];
    int opcion = 0;


    while(opcion != 5){
        //MENU
        printf("---MENU---\n");
        printf("0.-Listar Archivos\n");
        printf("1.-Crear Archivo\n");
        printf("2.-Leer Archivo\n");
        printf("3.-Agregar  Registro\n");
        printf("4.-Eliminar Archivo\n");
        printf("5.-Salir\n");
        printf("Ingresar la opcion que quiere seleccionar\n");
        scanf("%d",&opcion);

        switch(opcion){
        case 0:
            system("dir *.txt");
            
            break;
        case 1:
             ruta(nombre_archivo, path);
             archivo = fopen(path, "w");
             fclose(archivo);

            break;
       
        case 3:
            ruta(nombre_archivo, path);
            archivo = fopen(path,"r+");
            if(archivo == NULL){
                printf("El archivo que quiere abrir, no existe\n");
            }else{
                 fseek(archivo, 0, SEEK_END);
                    char nombre[20];
                    char apellido[20];
                    char telefono[20];
                    printf("Ingrese el nombre: \n");
                    scanf("%s", nombre);
                    printf("Ingrese el apellido: \n");
                    scanf("%s", apellido);
                    printf("Ingrese el telefono: \n");
                    scanf("%s", telefono);
                    fprintf(archivo, "%s %s %s\n", nombre, apellido, telefono);
                    fclose(archivo);
                  
                  



            }


            break;

        case 2:
           ruta(nombre_archivo, path);
            archivo = fopen(path,"r+");
            if(archivo == NULL){
                printf("El archivo que quiere abrir, no existe\n");
            }else{
                 //Desafio 1
                    while(!feof(archivo)){
                    fgets(caracter, sizeof(caracter), archivo); 
                    printf("%s",caracter);
                }
                   fclose(archivo);


            }
           
            break;

         case 4:
            ruta(nombre_archivo, path);
            archivo = fopen(path,"r");
            if(archivo == NULL){
                printf("El archivo que quiere eliminar, no existe\n");
            }else{
              fclose(archivo);
              remove(path);      
            }

            break;

         case 5:
            
            break;        
       
       
        default:
            printf("La opcion no es validad\n");

            break;
        }
    }




    return 0;
}
void ruta(char nombre_archivo[15], char path[100]){
    
    strcpy(path,"\\Users\\pepem\\OneDrive\\Escritorio\\lab 11\\");   
             printf("Ingresar el nombre del archivo\n");
             scanf("%s",nombre_archivo);
             strcat(nombre_archivo, ".txt");   
             strcat(path, nombre_archivo);

}
    