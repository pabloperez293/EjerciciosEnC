/*09-ingresar el tiempo trabajado por un operario y considerando que el valor de
la hora es de 10 pesos, calcular su sueldo e imprimirlo */
#include <stdio.h>

int main(int argc, char *argv[]) {

//Definimos
    int valHora = 10;
    int tiemp = 0;
    int sueldo;

    printf(" ingrese el tiempo trabajado en horas: ",tiemp);
    scanf("%d", &tiemp);

    sueldo = tiemp * valHora;

    printf("El sueldo del operario es: %d pesos", sueldo);

    return 0 ;
}
