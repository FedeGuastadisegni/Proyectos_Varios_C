#include <stdio.h>
#include <stdlib.h>

int main()
{

    char respuesta = 's';
    int numero = 0;
    int i;
    int contadorImpares = 0;
    int contadorPares = 0;
    int sumatoriaImpares = 0;
    int contadorTotal = 0;
    int sumadorTotal = 0;
    int maximo = 0;
    int minimo = 0;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;

    printf("Cuantos Numeros desea Ingresar?\n");
    scanf("%d",&numero);

    int numeros[200];
    system("cls");
    for(i=0;i<numero;i++){
        printf("Ingrese un numero!\n");
        scanf("%d",&numeros[i]);
    }

    minimo = numeros[0];

    int j;
    for (j=0;j < numero; j++){
        printf("%d\n", numeros[j]);
        contadorTotal = contadorTotal + 1;
        sumadorTotal = sumadorTotal + numeros[j];
        if(numeros[j] % 2 != 0){
            contadorImpares = contadorImpares + 1;
            sumatoriaImpares = sumatoriaImpares + numeros[j];
        }else{
            contadorPares = contadorPares + 1;
        }

        if(numeros[j] > maximo){
            maximo = numeros[j];
        }

        if(numeros[j] < minimo){
            minimo = numeros[j];
        }

        if(numeros[j]>=3 && numeros[j]<=15){
            c1++;
        }else if(numeros[j]>=16 && numeros[j]<=29){
            c2++;
        }else if(numeros[j]>30){
            c3++;
        }
    }

    float promedio = (sumadorTotal/contadorTotal);
    system("cls");
    printf("Cantidad de numeros impares: %d\n",contadorImpares);
    printf("Cantidad de numeros pares: %d\n",contadorPares);
    printf("Sumatoria de numeros impares: %d\n",sumatoriaImpares);
    printf("Promedio de todos los numeros ingresados: %f\n", promedio);
    printf("Maximo Numero ingresado: %d\n", maximo);
    printf("Minimo Numero ingresado: %d\n", minimo);
    printf("Numeros entre 3-15: %d\n",c1);
    printf("Numeros entre 16-29: %d\n",c2);
    printf("Numeros mayores a 30 %d\n",c3);

    //for para el punt 8 //
    printf("Todos los numeros ingresados: \n");
    int k,sumatoriaAntecesores = 0;
    for(k=0; k<numero; k++){
        if(numeros[k]<sumatoriaImpares){
            sumatoriaAntecesores = sumatoriaAntecesores + numeros[k];
        }
        printf("%d\t",numeros[k]);
    }
    printf("\n");
    printf("Sumatoria de numeros que anteceden a la sumatoria de impares (%d): %d\n",sumatoriaImpares,sumatoriaAntecesores);
    return 0;
}
