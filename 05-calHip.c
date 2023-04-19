#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

	//Definimos
        int primLad = 0;
        int segunLad = 0;
        int tercerLad = 0;

        int hip;
        int super;

    //Solicitamos lados del triangulo rectangulo
        printf("Ingrese el primer lado del triangulo  \n",primLad);

        scanf("%d",&primLad);

        printf("Ingrese el segundo lado del triangulo  \n",segunLad);

        scanf("%d",&segunLad);

        printf("Ingrese el tercer lado del triangulo  \n",tercerLad);

        scanf("%d",&tercerLad);

        printf("-------------------****----------------- \n");

        //pow quiere decir que elevamos cualquier numero

        hip = sqrt(pow(primLad,2)+ pow(segunLad,2));

        printf("La hipotenusa es de : %d \n",hip);

        printf("-------------------****----------------- \n");

        primLad = segunLad * tercerLad / 2;

        printf("El perimetro es de : %d \n",primLad);

        printf("-------------------****----------------- \n");

        super = primLad + segunLad + tercerLad / 2;

        printf("La superficie es de : %d \n",super);

        printf("-------------------****----------------- \n");

	return 0;
}
