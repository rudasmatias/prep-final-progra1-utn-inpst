#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


struct Pj{
    int attack;
    int defense;
    int life;
    char name[30];
};

struct alumno
{
     int legajo;
     int notas[10];
     float promedio;
};

struct empleado{
    int legajo;
    int edad;
};

void promediar(struct alumno* x){ 
    int i, aux = 0; 
 
    for (i=0 ; i<10 ; i++) {
        aux += x->notas[i]; 
    }

    x->promedio = aux / 10.0; 
}

void cargarEmpleados(struct empleado* empleado[]){

    for (int i = 0; i < 10; i++)
    {
        empleado[i]->legajo=rand() % 100 +1;
        empleado[i]->edad = 21 +i;
    }

}


int main(){

    printf("Practicando structs");
    srand(time(NULL));
/*     struct Pj chaman;
    strcpy(chaman.name,"Matias");
    chaman.attack = 60;
    chaman.defense = 50;
    chaman.life = 100;
    printf("\n%s",chaman.name);
    
    struct alumno unAlumno = {1234, {4,8,6,9}};
    unAlumno.notas[0] = 10;
    struct alumno otroAlumno = unAlumno; */

    struct empleado empleados[10]; 
    int i; 
    //cargarEmpleados(empleados);
 
    for (i=0 ; i<10 ; i++){ 
        empleados[i].legajo = rand() % 1000; 
        empleados[i].edad = 21 + i; 
    } 

        for (i=0 ; i<10 ; i++){ 
        printf("\n%i",empleados[i].legajo);
    }

/*     struct alumno unAlumno = {1234, {4,7,9,8,4,4,7,10,8,5}}; 
    promediar(&unAlumno); 
    printf("\nEl promedio es %2.2f\n",unAlumno.promedio); */


    return 0;
}