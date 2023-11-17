#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void problema1(){

    char nombre1[10],nombre2[10],nombre3[10];
    char ordenados[30];

    printf("\nIngrese 3 nombres");
    printf("\nNombre 1: ");
    gets(nombre1);
    printf("Nombre 2: ");
    gets(nombre2);
    printf("Nombre 3: ");
    gets(nombre3);

    if(strcasecmp(nombre1,nombre2)< 0 && strcasecmp(nombre1,nombre3) < 0){

    

        strcpy(ordenados,nombre1);
        strcat(ordenados,",");

        if(strcasecmp(nombre2,nombre3)<0){
            strcat(ordenados,nombre2);
            strcat(ordenados,",");
            strcat(ordenados,nombre3);
        }else{
            strcat(ordenados,nombre3);
            strcat(ordenados,",");
            strcat(ordenados,nombre2);
        }

    }else if (strcasecmp(nombre2,nombre1)< 0 && strcasecmp(nombre2,nombre3) < 0){
    

        strcpy(ordenados,nombre2);
        strcat(ordenados,",");

        if(strcmp(nombre1,nombre3)<0){
            strcat(ordenados,nombre1);
            strcat(ordenados,",");
            strcat(ordenados,nombre3);
        }else{
            strcat(ordenados,nombre3);
            strcat(ordenados,",");
            strcat(ordenados,nombre1);
        }
    }else{

        strcpy(ordenados,nombre3);
        strcat(ordenados,",");

            if(strcmp(nombre1,nombre2)<0){
            strcat(ordenados,nombre1);
            strcat(ordenados,",");
            strcat(ordenados,nombre2);
        }else{
            strcat(ordenados,nombre2);
            strcat(ordenados,",");
            strcat(ordenados,nombre1);
        }
    }
    
    printf("El listado de palabras ordenadas alfabeticamente es: %s",ordenados);

}

int main(){

    //Ejercicios con cadenas

    char nombre[30] = "Matias";
    char apellido[30] = "rudas";
    char nombre2[30] = "maTias";
    char nombreCompleto[30];
    int largoNombre = strlen(nombre);
    
    strcpy(nombreCompleto, nombre);
    strcat(nombreCompleto," ");
    strcat(nombreCompleto,apellido);
    printf("%s",nombreCompleto);
    printf("\n%i",largoNombre);
    
    strcmp(nombre,nombre2) < 0 ? printf("\n%s, %s",nombre,nombre2) : printf("\n%s, %s",nombre2,nombre);

    //comparacion sin importar may o min
    strcasecmp(nombre,nombre2) == 0 ? printf("\nSon iguales") : printf("\nNo son iguales"); 

    problema1();
    
    return 0;
}