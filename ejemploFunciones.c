#include<stdio.h> 
int menu(); 
void calcularSumas(); 
void calcularMultiplicaciones(); 
void error(int); 
void salir(); 
 
int main() 
{ 
    int opcion; 
    opcion = menu(); 
    while (opcion != 3){ 
        switch(opcion){ 
            case 1: 
                calcularSumas(); break; 
            case 2: 
                calcularMultiplicaciones(); break; 
            default: 
                error(1); 
        } 
        opcion = menu(); 
    } 
    salir(); 
    return 0; 
} 
 
int menu(){ 
    int opcion; 
    printf("Ingrese una opcion:\n"); 
    printf("1- Calcular sumas\n"); 
    printf("2- Calcular multiplicaciones\n"); 
    printf("3- Salir\n"); 
    scanf("%d",&opcion); 
    printf("\n"); 
    return opcion; 
} 
 
void calcularSumas(){ 
    int a,b; 
    printf("Ingrese un valor:"); 
    scanf("%d",&a); 
    printf("Ingrese otro valor:"); 
    scanf("%d",&b); 
    printf("El resultado es %d\n\n",a+b); 
} 
 
void calcularMultiplicaciones(){ 
    printf("*** Funcion no implementada!\n\n"); 
} 
 
void error(int n){ 
    printf("*** ERROR - "); 
    switch(n){ 
    case 1: 
        printf("Opcion invalida!"); break; 
    case 2: 
        printf("Otro error!"); break; 
    } 
    printf(" ***\n\n"); 
} 
 
void salir(){ 
    printf("Gracias por utilizar este programa.\n"); 
} 