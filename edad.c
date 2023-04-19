#include<stdio.h>

void main()
{
   int edad = 0;

   printf("ingrese su edad: ");
   scanf("%d", &edad);

   int proxEdad = edad + 1;

   printf("Luego de su cumpleanios usted tendra %d anos \n ", proxEdad);

   printf("--------------------------------");

   return 0;
}
