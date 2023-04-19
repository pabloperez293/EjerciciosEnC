#include<stdio.h>

void main()
    {
        //Definimos
        int primLad = 0;
        int segunLad = 0;
        int tercerLad = 0;

        int perimetro;


        printf("Ingrese el primer lado del triangulo  \n",primLad);

        scanf("%d",&primLad);

        printf("Ingrese el segundo lado del triangulo  \n",segunLad);

        scanf("%d",&segunLad);

        printf("Ingrese el tercero  lado del triangulo   \n",tercerLad);

        scanf("%d",&tercerLad);

        printf("-------------------****----------------- \n");

        perimetro = primLad + segunLad + tercerLad;

        printf("el perimetro del triaunglo es de : %d \n",perimetro);

        printf("-------------------****----------------- \n");

        return 0;

    }
