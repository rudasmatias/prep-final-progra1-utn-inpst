#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ejercicio1(){

    float altura[] = {1.7,1.65,1.8,1.65,1.55,1.67}; //5 elementos
    int bajas=0,altas=0;
    float acum = 0;
    float promedio;
    int longitud = sizeof(altura)/sizeof(altura[0]);
    for(int i=0; i< longitud ;i++)
    {
        acum+=altura[i];
    }

    promedio = acum / longitud;
       for(int i=0; i< longitud ;i++)
    {
        if(altura[i]>=promedio){
            altas++;
        }else{
            bajas++;
        }
    }

    printf("El promedio es de : %.2f",promedio);
    printf("\nLa cantidad de personas altas : %i",altas);
    printf("\nLa cantidad de personas bajas : %i",bajas);
}

void ejercicio2(){

    float sueldosManana[4];
    float sueldosTarde[4];
    float gastoTotalManana = 0;
    float gastoTotalTarde = 0;
    int longitud = sizeof(sueldosManana)/sizeof(sueldosManana[0]);

    printf("Escribe el sueldo del turno manana\n");
    for (int i = 0; i < longitud; i++)
    {
        printf("Sueldo trabajador num %i: ",i+1);
        scanf("%f",&sueldosManana[i]);
        gastoTotalManana+=sueldosManana[i];
    }

    printf("Escribe el sueldo del turno tarde\n");
    for (int i = 0; i < longitud; i++)
    {
        printf("Sueldo trabajador num %i: ",i+1);
        scanf("%f",&sueldosTarde[i]);
        gastoTotalTarde+=sueldosTarde[i];
    }
    
    printf("\nEl gasto total del turno manana es de: %.2f",gastoTotalManana);
    printf("\nEl gasto total del turno tarde es de: %.2f",gastoTotalTarde);
}

void ejercicio3(){

    srand(time(NULL));
    int elementos[8];
    int mayores50=0 , acumTotal = 0, acumMayores36 = 0;
    int longitud = sizeof(elementos)/sizeof(elementos[0]);    

    for (int i = 0; i < longitud; i++)
    {
        //Valores entre 1 y 100
        elementos[i] = rand() % 100 + 1;
        printf("\nElemento: %i",elementos[i]);
        acumTotal += elementos[i];

        if(elementos[i]>36){
            acumMayores36 += elementos[i];
            if(elementos[i]>50){
                mayores50++;
            }
        }
    }

    printf("\nEl valor acumulado de todos los elementos del vector es: %i",acumTotal);
    printf("\nEl acumulado de los elementos mayores a 36 : %i",acumMayores36);
    printf("\nLa cantidad de valores mayores a 50: %i",mayores50); 
}

int main()
{

    //Ejercicios: Con arrays -->integer y float
    /*
    DEFINIR UN VECTOR DE 5 COMPONENTES DE TIPO FLOAT QUE REPRESENTEN LAS ALTURAS DE 5 PERSONAS.
    OBTENER EL PROMEDIO DE LAS MISMAS. CONTAR CON CUÁNTAS PERSONAS SON MÁS ALTAS QUE EL PROMEDIO Y CUÁNTAS MÁS BAJAS.
    */
    //ejercicio1();

    /*
    Una empresa tiene dos turnos (manana y tarde) en los que trabajan 8 empleados (4 manana, 4 tarde)
    Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno(definir los 
    dos vectores con componentes de tipo float)
    Imprimir los gastos de cada turno.
    */
    ejercicio2();

    /*
    Desarrollar un programa que permita ingresar un array de 8 elementos, e informe:
    El valor acumulado de todos los elementos del vector.
    El acumulado de los elementos mayores a 36.
    La cantidad de valores mayores a 50. 
    */
    ejercicio3();



    return 0;
}