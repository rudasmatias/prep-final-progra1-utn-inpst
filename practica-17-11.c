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

void cargar2(char v[][31]){
    for(int f=0; f<3; f++){
        printf("Ingrese el nombre del articulo: \n");
        gets(v[f]);
    }
}

void imprimir(char v[][31]){
    printf("\nListado de articulos:\n");
    for(int f=0;f<3;f++){
        printf("\n-->%s",v[f]);
    }
}

void cargarRegistro(char v[5][30]){
    for(int f=0; f<5; f++){
        printf("\nCargar nombre: ");
        gets(v[f]);
    }
}

void imprimirPersonas(char v[5][30]){
    printf("\nRegistro de personas:");
    for(int f=0;f<5;f++){
        printf("\n-->%s",v[f]);
    }
}

void verificarExistencia(char nombre[],char registro[5][30]){
        for(int f=0; f<5; f++){
        if(strcmp(nombre,registro[f])==0){
            printf("\nLa persona se encuentra en la lista");
        }
    }
}

void ordenarAlfabeticamente(char registro[5][30]){


    char aux[30];
    for(int k=0;k<4;k++){
        printf("\nvuelta %i\n",k);
        for(int f=0; f<4-k;f++){
            if(strcmp(registro[f],registro[f+1])>0){
                printf("\ncambio %i\n",f);
                strcpy(aux, registro[f]);
                strcpy(registro[f], registro[f+1]);
                strcpy(registro[f+1],aux);
            }
        }
    }



   imprimirPersonas(registro);

}

int main(){


/*     int vec[10];
    int largo =sizeof(vec)/sizeof(vec[0]);
    printf("Por favor cargue el vector\n");
    cargar(vec,largo);
    ordenado(vec, largo); */

    /*
    Confeccionar un programa que permita ingresar en una matrz de tipo char los nombres de articullos
    para la venta (3 nombre de articulos). 
    Hacer luego una funcion que imprima los nombres de dichos articulos
    */


/*     char articulos[3][31]; //Tres filas, con un string por linea de 31 caracteres.

    char ejemplo[][31] = {
        {'h','o','l','a'},
        {'h','o','l','a'},
        {'h','o','l','a'},
    };

    // cargar2(articulos);
    // imprimir(articulos); */

    /*
    Confeccionar un programa que permita:
    1-Almacenar en una matriz los datos de 5 personas.
    2-Imprimir los nombres.
    3-Ingresar otro nombre y verificar si se encuentra almacenado en la matriz. 
    */

    char registro[5][30];
    char nombre[30];
    cargarRegistro(registro);
    imprimirPersonas(registro);
/*     printf("\nIngrese un nombre a consultar su existencia:");
    gets(nombre);
    verificarExistencia(nombre,registro); */

    ordenarAlfabeticamente(registro);

    return 0;
}