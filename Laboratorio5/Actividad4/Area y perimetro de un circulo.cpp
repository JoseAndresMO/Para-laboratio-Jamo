
#include<stdio.h>

float radio;
float perimetro;
float area;

int main() {
  printf("Calculadora del area y el perimetro de un circulo\n");
  printf("Ingresar un radio ");
  scanf("%f",&radio);

  area=3.14*radio*radio;
  perimetro=2*3.14*radio;

  printf("El perimetro es %f y el area es %f",perimetro,area);

  return 0;
}