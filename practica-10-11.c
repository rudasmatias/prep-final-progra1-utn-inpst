#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

const int NOTAS=3;
const int ALUMNOS=15;

struct Persona
{
    char nombre[ALUMNOS];
    int edad;
    float altura;
};

struct Materias
{   
    int matematica[NOTAS];
    int naturales[NOTAS];
};


struct Alumnos
{
    char nombre[50];
    int edad;
    float promedio;
    struct Materias materias;
};


int main(){

    //Arrays: variables donde guardamos varioes elementos del mismo tipo

    int edades[] = {20,21,20,23,26,21};
    printf("\nEl elemento en la posicion 0 es: %i",edades[0]);
    
    float pesos[] = {70.5,75.2,71.2};
    printf("\nEl elemento en la posicion 0 es: %f",pesos[0]);

    char letras[] = {'a','b','c'};
    printf("\nEl elemento en la posicion 0 es: %c",letras[0]);

    char nombre[] = "Matias"; //Es un string (internamente funciona como un array de caracteres que finaliza con '\0')
    printf("\nEl elemento en la posicion 0 es: %c",nombre[0]);
    printf("\nEl string completo es: %s",nombre);

    //Si definimos un array pero no lo inicializamos, debemos definirle también la cantidad de elementos que puede guardar.

    int talles[10];

    //modificación de array

    edades[0] = 30;
    printf("\nEl elemento en la posicion 0 es: %i",edades[0]);


    //Estructuras: es un tipo de dato que permiten almacenar diferentes tipos de datos. Se definen por fuera del main.
    //Los miembros de la estructura se denominan campos.
    //Declaración e inicialización de una variable de tipo struct Persona

    struct Persona matias = {
        "Matias",
        31,
        1.67,
    };

    //matias.nombre = "Hola"; no se puede modificar un string directamente --> se utiliza lo siguiente:
    strcpy(matias.nombre,"Ronald");
    matias.edad = 32;
    printf("\nHola mi nombre es %s, tengo %i y mido %.2f",matias.nombre,matias.edad,matias.altura);

    struct Persona persona1[10];
    strcpy(persona1[0].nombre,"Valentin");
    persona1[0].edad = 17;
    persona1[0].altura = 1.75;

    printf("\n%s %i %.2f",persona1[0].nombre,persona1[0].edad,persona1[0].altura);

    sizeof(struct Persona)/sizeof(matias.edad);

    struct Alumnos clase8voA[30];

     // Cargar datos para varios alumnos
    for (int i = 0; i < 3; i++) {
        printf("Ingrese los datos para el alumno %d:\n", i + 1);
        cargarAlumno(&clase8voA[i]);
    }

    // Mostrar los datos ingresados
    printf("\nDatos de los alumnos:\n");
    for (int i = 0; i < ALUMNOS; i++) {
        printf("Alumno %d:\n", i + 1);
        printf("Nombre: %s\n", clase8voA[i].nombre);
        printf("Edad: %d\n", clase8voA[i].edad);
        printf("Promedio: %.2f\n", clase8voA[i].promedio);
        printf("Notas de Matemáticas: %d, %d, %d\n", clase8voA[i].materias.matematica[0], clase8voA[i].materias.matematica[1], clase8voA[i].materias.matematica[2]);
        printf("Notas de Naturales: %d, %d, %d\n", clase8voA[i].materias.naturales[0], clase8voA[i].materias.naturales[1], clase8voA[i].materias.naturales[2]);
        printf("\n");
    }



    return 0;
}