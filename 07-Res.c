#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

//Definimos variables
    int val1 = 0 ;
    int val2 = 0 ;

    int sum ;
    int prod ;
    int res ;

    printf("ingresar primer valor ", val1);
    scanf("%d",&val1);

    printf("ingresar segundo valor ", val2);
    scanf("%d",&val2);

//resta
    res = val1 - val2;
//suma
    sum =  val1 + val2;
//prod
    prod = val1 * val2;

    printf("-------------------****----------------- \n");

//Resultados

    printf("Los resultados de la resta es : %d \n",res);
    printf("Los resultados de la suma es : %d \n",sum);
    printf("Los resultados del producto es : %d \n",prod);

    printf("-------------------****----------------- \n");


    return 0 ;

}
