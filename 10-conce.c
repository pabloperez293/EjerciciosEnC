/* 10- Una concesionaria de autos desea liquidar el sueldo a cada vendedor pagando $500
por mes mas un plus de 10% del precio sobre cada vehiculo vendido (autoVen) y un valor constante
de 50 pesos por cada uno de ellos(valCon), se ingresa el valor del vehiculo(auto) y cuantos vehiculos de
este tipo vendio, calcular su sueldo e imprimirlo. */

#include <stdio.h>

int main(int argc, char *argv[]) {
    //Definimos variables
    int suelVend = 500;
    int autoVen = 0;
    int valCon = 50;
    int aut = 0;
    int sueldo = 0 ;

    printf("ingresar el valor del carro \n ",aut);
    scanf("%d",&aut);

    printf("----------------------***----------- \n");

    printf("ingresar cuantos autos vendio \n ",autoVen);
    scanf("%d",&autoVen);

    printf("----------------------***----------- \n");

    //operaciones
    int valTotal = valCon * autoVen;

    int liqSuel = aut + autoVen * 0.1;

    sueldo = liqSuel + valTotal + suelVend;

    printf("el Sueldo liquidado del vendedor es de: %d \n",sueldo);

    printf("----------------------***----------- \n");
 return 0 ;
}
