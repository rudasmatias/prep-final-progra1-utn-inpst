#include <stdio.h>
#include <stdlib.h>
#define SUELDO 5


void cargarSueldos(int sueldos[]){

    for(int e =0; e<SUELDO; e++){
        printf("Escribe un sueldo: ");
        scanf("%i",&sueldos[e]);
    }


};
void imprimirSueldos(int sueldos[]){
    printf("\nListado de sueldos: ");

    for(int e =0; e<SUELDO; e++){
        printf("\n--->%i ",sueldos[e]);
    }
};


//bubblesort
void ordenarSueldos(int sueldos[]){
    int aux;
    //necesitamos un ciclo que tome el maximo de movimientos desde la primera posicion hasta la ultima, ya en la primer pasada del ciclo traslado, vamos a colocar al más grande en la última posición.
    //si son 5 elementos, el primer elemento se puede mover hasta 4 posiciones hasta el final 
    for(int traslado=0; traslado<SUELDO-1; traslado++){
        //necesitamos un ciclo que recorra el array de enteros:
        //La idea del indice traslado es que se reste 1 al iterador interno ya que por cada pasada del iterador externo se acomoda el más grande
        for(int cambio=0; cambio<SUELDO-traslado-1;cambio++){
            //tomar un elemento e ir comparando
            if(sueldos[cambio+1]<sueldos[cambio]){
                aux = sueldos[cambio];
                sueldos[cambio]=sueldos[cambio+1];
                sueldos[cambio+1] = aux;
            }
        }
    }
};

//quicksort
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){


    int sueldos[SUELDO];

    //bubble sort
    cargarSueldos(sueldos);
    imprimirSueldos(sueldos);
    ordenarSueldos(sueldos);
    imprimirSueldos(sueldos);

    //quicksort
/*     int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: \n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Array ordenado: \n");
    printArray(arr, n); */


    return 0;
}