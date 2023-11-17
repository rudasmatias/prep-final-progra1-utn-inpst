#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void cargarValores(int* a, int* b){

    printf("Cargar valor a: ");
    scanf("%i",a);
    
    printf("Cargar valor b: ");
    scanf("%i",b);
}

int sumarValores(int a, int b){
    return a+b;
}


int calcularMaximo(int a[], int largo){

    int max = 0;

    for(int i = 0; i<largo ; i++){
        if(a[i]>max){
            max = a[i];
        }
    }

    return max;
}

int main(){

/*     int a, b, suma;
    char confirmacion;

    do{
        cargarValores(&a,&b);
        suma = sumarValores(a,b);
        printf("El total de la suma fue: %i.", suma);
        printf("\nDesea realizar otra suma? [s/n]");
        fflush(stdin);
        scanf("%c",&confirmacion);
    }while(confirmacion == 's' || confirmacion == 'S'); */

    int enteros[] = {1,5,6,9,87,7,200,4};
    int max = calcularMaximo(enteros, sizeof(enteros)/sizeof(enteros[0]));
    printf("\nEl maximo es: %i", max);

    printf("\nAdios!");


    return 0;
}