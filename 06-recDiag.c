#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

	//Definimos
        int base = 2;
        int altura = 3;
        int tercerLad = 1;

        int diagonal;
        int super;//check
        int per;

//superficie
        super = base * altura;

        printf("El superficie es de : %d \n",super);

        printf("-------------------****----------------- \n");


// Perimetro

        per = sqrt(pow(base,2) + pow(altura,2));

        printf("El Perimetro es de : %d \n",super);

        printf("-------------------****----------------- \n");

//diagonal

        diagonal = sqrt(pow(base,2) + pow(altura,2)) / 2;

        printf("El diagonal es de : %d \n",diagonal);

        printf("-------------------****----------------- \n");

    return 0;
}
