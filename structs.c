#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

const int NOTAS=3;
#define ALUMNOS 1 //Para usar valores dentro de la definición de los structs debo usar la notación de #define

struct Materias
{   
    int matematica[ALUMNOS];
    int naturales[ALUMNOS];
};

struct Alumnos
{
    char nombre[50];
    int edad;
    float promedio;
    struct Materias materias;
};

void cargarAlumno(struct Alumnos *alumno) 
{
    int sumMat=0, sumNat=0;

    printf("Ingrese el nombre del alumno: ");
    scanf("%s", alumno->nombre);

    printf("Ingrese la edad del alumno: ");
    scanf("%d", &alumno->edad);

    // Cargar datos de materias
    printf("Ingrese las %i notas de Matematicas: \n",NOTAS);
    for (int i = 0; i < NOTAS; i++) {
        printf("Nota %i : ",i+1);
        scanf("%d", &alumno->materias.matematica[i]);
        sumMat+=alumno->materias.matematica[i];
    }

    printf("Ingrese las 3 notas de Naturales : \n");
    for (int i = 0; i < NOTAS; i++) {
        printf("Nota %i : ",i+1);
        scanf("%d", &alumno->materias.naturales[i]);
        sumNat+=alumno->materias.matematica[i];
    }

    alumno->promedio=((sumMat/NOTAS*1.00)+(sumNat/NOTAS*1.00))/2;
    
}

int main(){

    struct Alumnos clase8voA[30];

     // Cargar datos para varios alumnos

    for (int i = 0; i < ALUMNOS; i++) {
        printf("Ingrese los datos para el alumno %d:\n", i + 1);
        cargarAlumno(&clase8voA[i]);
    }

    // Mostrar los datos ingresados
    printf("\nDatos de los alumnos:\n");
    for (int i = 0; i < ALUMNOS; i++) {
        printf("Alumno %d:\n", i + 1);
        printf("Nombre: %s\n", clase8voA[i].nombre);
        printf("Edad: %d\n", clase8voA[i].edad);
        printf("Notas de Matematicas: %d, %d, %d\n", clase8voA[i].materias.matematica[0], clase8voA[i].materias.matematica[1], clase8voA[i].materias.matematica[2]);
        printf("Notas de Naturales: %d, %d, %d\n", clase8voA[i].materias.naturales[0], clase8voA[i].materias.naturales[1], clase8voA[i].materias.naturales[2]);
        printf("Promedio entre Matematicas y Naturales: %.2f\n", clase8voA[i].promedio);
        printf("\n");
    }



    return 0;
}