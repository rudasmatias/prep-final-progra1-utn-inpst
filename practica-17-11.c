#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void cargar(int v[], int ctd){

    for(int i =0; i<ctd; i++){
        printf("Cargar el elemento %i: ",i);
        scanf("%i",&v[i]);
    }

}

void ordenado(int v[], int ctd) {

    // int cont = 0;
    //Se puede usar un contador para validar o una bandera
    int ordenado = 0;
    for(int i=0; i<ctd;i++){
        // if(v[i]<v[i+1]){
        //     cont++;
        // }
        if(v[i]>v[i+1]){
            ordenado = 1;
            printf("\nVector desordenado");
            break;
        }
    }

    if(!ordenado)printf("\nVector ordenado");

}

int main(){


    int vec[10];
    int largo =sizeof(vec)/sizeof(vec[0]);
    printf("Por favor cargue el vector\n");
    cargar(vec,largo);
    ordenado(vec, largo);


    return 0;
}