#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Ejercicio 1: Registro de Empleados
Define una estructura Empleado que contenga información sobre el nombre, salario y años de servicio de un empleado. Luego, crea funciones para cargar y imprimir la información del empleado.
*/


typedef struct{
    char nombre[30];
    int salario;
    int aniosAntiguedad;
}Empleado;


void cargarEmpleado(Empleado *x){
    fflush(stdin);
    printf("Ingrese el nombre del empleado: ");
    gets(x->nombre);
    printf("Ingrese el salario: ");
    scanf("%i",&x->salario);
    printf("Ingrese la antiguedad en anios: ");
    scanf("%i",&x->aniosAntiguedad);
};


void imprimirInformacion(Empleado x){
    printf("Nombre del empleado: %s. ",x.nombre);
    printf("Tiene %i anios de antiguedad, ",x.aniosAntiguedad);
    printf("y gana %i.\n",x.salario);
};



int main(){

    Empleado unEmpleado; //Un solo emmpleado

    Empleado variosEmpleados[3]; //varios empleados 

    /*
    Puede pasarse la variable individualmente como este caso
    La funcion que recibe debe ser un puntero

    o

    Se puede pasar el array como tal e iterar sobre la misma funcion que carga o imprime
    */

    for(int i = 0;i<3;i++){
        cargarEmpleado(&variosEmpleados[i]);
    }
    
    //cargarEmpleado(&unEmpleado);

    for(int i = 0;i<3;i++){
         imprimirInformacion(variosEmpleados[i]);
    }
   
    return 0;
}