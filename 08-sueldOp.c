/*08-ingresar el valor de la hora y el tiempo trabajado por un operario ,
calcular su sueldo e imprimirlo en c
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {

//Definimos
    int hora = 0;
    int tiemp = 0;
    int sueldo;

// Pedimos valores
    printf("colocar el calor de la hora porfavor: ", hora);
    scanf("%d",&hora);
    printf("colocar el calor del tiempo trabajado porfavor: ", tiemp);
    scanf("%d",&tiemp);

    sueldo = hora * tiemp;

    printf("el sueldo del operario es de : %d \n ", sueldo);
    printf("-------------------****----------------- \n");

    return 0;
}
