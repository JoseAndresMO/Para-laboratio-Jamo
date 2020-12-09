#include <stdio.h>

float tarea1;
float tarea2;
float tarea3;
float x;

float prueba1;
float prueba2;
float prueba;

float act;

int main() {
  
printf("Calcula la ultima nota de prueba para aprobar\n");

printf("Ingresar nota tarea 1:\n");
scanf("%f",&tarea1);

printf("Ingresar nota tarea 2:\n");
scanf("%f",&tarea2);

printf("Ingresar nota tarea 3:\n");
scanf("%f",&tarea3);

printf("Ingresar nota prueba 1:\n");
scanf("%f",&prueba1);


printf("Ingresar nota actitudinal:\n");
scanf("%f",&act);

x=tarea1*0.1+tarea2*0.1+tarea3*0.1+act*0.1+prueba1*0.25;

prueba=-x+4; 
prueba2=prueba/0.35; 

printf("La nota nesesaria en la prueba 2 es:%f\n",prueba2);

return 0;

}