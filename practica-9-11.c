#include <stdio.h>
#include <stdlib.h>

void voidFunctionSinParametros(){
    printf("Hola mundo!!");
}
void voidFunction(char *name){
    //Si paso una cadena de valores estoy recibiendo la referencia de la variable por lo que utilizamos el char * puntero
    printf("\nHola %s\n", name);
}
float calcularPromedio2notas(int a, int b, int c, float *prom){
    //Se tiene que castear los valor int con alguno float colocando un .0 a alguno elemento de la operación
    *prom = (a+b+c)/3.00;
    return *prom;
}
void pasajePorValor(int x){ 
    x+=2; 
    printf("La variable ahora vale %d\n",x); 
}
void pasajePorReferencia(int* x){ 
    *x+=2; 
    printf("La variable ahora vale %d\n",*x); 
}


//Forma de expresar como prototipos. Luego abajo del main hay q definirla.
int suma(int a, int b);


int main(){

    //FUNCIONES: Son estructuras que pueden recibir valores, ejecutar código con el mismo y retornar un valor final.
    //Se definen todas antes de la main, para que luego esta main pueda utilizaras, ya que el código corre de arriba a abajo,
    //no sabria que existen si estuviesen abajo del main.
    
    //Función main: Es la función principal del programa donde se ejecutará todo el código. Cualquier función declarada fuera de esta
    //deberá ser llamada dentro de esta para poder ejecutarse.

    printf("Estamos en el main!!!");

    //Función void: Es una función que no retorna ningún valor, es decir puede ejecutar código, pero no retorna nada.
    //Se puede iniciar un string de la siguiente forma --> char nombre[] = "Ronald";
    printf("\nIngresa tu nombre: ");
    char name[50];
    scanf("%s", name);
    voidFunctionSinParametros();
    voidFunction(name); 
    
    //Para el caso en que el espacio reservado para el string sea mayor al de las letras
    for(int i = 0; name[i] !='\0'; i++){
            printf("%c",name[i]);
    }

    //El caracter '\0' se muestra como un caracter invisible
    int longitud = sizeof(name);
    for (int i = 0; i < longitud; i++) {
        printf("Carácter en la posición %d: %c\n", i, name[i]);
    }

    //Forma de pasar un puntero a una función:
    // int s=4, h=18;
    // duplicar(&h);

    //Función int: Es una función que retorna un entero, por lo que al llamarse en la main puede asignarse su 
    //valor de retorno a una nueva variable.

    //Función char: idem a int, pero devuelve caracteres.

    //Función float: idem a int, pero devuelve caracteres.

    float promedio;
    calcularPromedio2notas(7,8,9,&promedio);
    printf("promedio pasaje por valor y referencia %.2f",promedio);

    int resultado = suma(2,5); 
    printf("\nresultado pasaje por valor: %i",resultado);

    
    //Pasaje por valor:
    int y=2; 
    printf("\nLa variable vale %d\n",y); 
    pasajePorValor(y); 
    printf("Finalmente la variable vale %d\n",y); 


    //Pasaje por referencia:
    int z=2; 
    printf("La variable vale %d\n",z); 
    pasajePorReferencia(&z); 
    printf("Finalmente la variable vale %d\n",z); 
    
    /*
    Modularidad 
    El  aporte  más  importante  que  hizo  el  diseño  estructurado  fue  la  idea  de  que,  para  resolver  un 
    problema complejo de desarrollo de software, conviene separarlo en partes más pequeñas, que se 
    puedan diseñar, desarrollar, probar y modificar, de manera sencilla y lo más independientemente 
    posible del resto de la aplicación.
    */

    //Funcines recursivas ---> Funciones que se llaman a sí misma!!! Muy  poderoso en el ámbito matemático. Sirve para recorrer listas y árboles
    //Depende de al menos una condición de corte
    //Consta de:
    //-->Un caso trivial o base (Quier decir que bajo este punto la función no  vuelve a invocarse)
    //-->El caso general que es el que se vuelve a invocar al algoritmo con un  caso más pequeño del mismo (hay que reducir hasta llegar al corte)
    
    //Factorial de un número:


    return 0;
}

int suma(int a, int b){
    return a + b;
}