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

int calcularPago(int a, int b){
    return a*b;
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

/*     int enteros[] = {1,5,6,9,87,7,200,4};
    int max = calcularMaximo(enteros, sizeof(enteros)/sizeof(enteros[0]));
    printf("\nEl maximo es: %i", max);

    printf("\nAdios!"); */

    /*
    CONFECCIONAR UN PROGRAMA QUE SOLICITE EL PAGO POR HORA DE UN EMPLEADO Y LA CANTIDAD DE HORAS TRABAJADS DENTRO DE UNA ESTRUCTURA
    REPETITIVA EN LA FUNCIÓN MAIN. ELABORAR UNA FUNCIONQUE RECIBA COMO PARAMETRO EL VALOR DE LA HORA Y LA CANTIDAD DE HS TRABAJADAS
    MOSTRAR TOTAL A PAGAR
    */

/*    int horas, pago, total = 0;
   char confirmacion;
   do
   {
    printf("Ingresar valor de hora: ");
    scanf("%i",&pago);
    printf("Ingresar cantidad de horas: ");
    scanf("%i",&horas);
    total = total +calcularPago(horas, pago);
    fflush(stdin);
    printf("Desea cargar otro empleado? [s/ n]");
    scanf("%c",&confirmacion);
   } while ('s' == confirmacion || 'S' == confirmacion);
    
    printf("\nMonto total a pagar es: %i", total); */

    return 0;
}