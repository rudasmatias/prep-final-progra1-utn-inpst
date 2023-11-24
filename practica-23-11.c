#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
enum Estados {
    Inicial,
    Procesando,
    Completo,
    Error
};

enum Color{ 
    blanco, //0
    amarillo, //1
    rojo, //2
    verde, //3
    azul, //4
    marron, //5
    negro //6
};

void procesarEstado(enum Estados estado) {
    switch (estado) {
        case Inicial:
            printf("La maquina esta en el estado inicial.\n");
            break;
        case Procesando:
            printf("La maquina esta procesando.\n");
            break;
        case Completo:
            printf("La maquina ha completado su tarea.\n");
            break;
        case Error:
            printf("La maquina ha encontrado un error.\n");
            break;
        default:
            printf("Estado desconocido.\n");
    }
}

void elegirColor(enum Color color_coche){

        while ((color_coche>=0)&&(color_coche<=6)){ 
        switch(color_coche) { 
            case blanco: printf("El coche es blanco\n"); break; 
            case amarillo: printf("El coche es amarillo\n"); break; 
            case rojo: printf("El coche es rojo\n"); break; 
            case verde: printf("El coche es verde\n"); break; 
            case azul: printf("El coche es azul\n"); break; 
            case marron: printf("El coche es marron\n"); break; 
            case negro: printf("El coche es negro\n"); break; 
            } 
        printf("Ingrese el color del coche\n"); 
        scanf("%d", &color_coche); 
        } 
    system("pause"); 
}

int main(){

    /*
    Uso común:
    Mejora la legibilidad del código: Los enum permiten utilizar nombres descriptivos en lugar de valores numéricos, haciendo que el código sea más fácil de entender.

    Definir conjuntos de opciones: Se utilizan para representar conjuntos discretos de opciones o estados.
    */
    printf("Practica enum");

    //Cada valor que está dentro de los corchetes representa un valor entero positivo comenzando en 0


    enum Color color_coche; 
    printf("\nIngrese el color del coche\n"); 
    scanf("%d", &color_coche); 
    elegirColor(color_coche);

    enum Estados estadoActual = Procesando;
    procesarEstado(estadoActual);

    return 0;
}