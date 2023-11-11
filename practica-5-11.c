#include <stdio.h>
#include <tchar.h>
#include <math.h>

//Declaración de una variable global
#define PI 3.14 //Macros con alcance en todo el preprocesador, pueden causar colisiones de nombres facilmente
const float PI2 = 3.143; //Forma más segura y controlada de utilizar una variable global
    
void ejemplo(){
    int edad;
    char nombre[50];

    printf("\nIngrese su nombre: ");
    scanf("%49s", nombre); // Leer una cadena de hasta 49 caracteres

    // Limpiar el búfer de entrada para eliminar caracteres no deseados
    fflush(stdin);

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    printf("Nombre: %s\n", nombre);
    printf("Edad: %d\n", edad);
}

int main (){

    const float PI3 = 3.143; //Constante en un entorno local
    //Declaración de variables locales (disponibles solo en la función main)
    //Tipos de variables:
    int a = 10; 
    float b = 10.5;
    double c = 10.265; //se pide la informacion como scanf("%lf",&variable)

    //Caracteres y cadenas de caracteres (strings)
    char x = 'x';
    char y[]= "Matias"; //Definición de un arreglo de caracteres -->utilizamos %s 
    //El scanf() lee hasta encontrar el primer espacio
    //scanf("hola mundo")-->solo guarda ("hola")
    //cuando el parámetro que se pasa es un string, no hace falta colocar el &, ya que estamos trabajando con la referencia directamente
    //Para solucionar este problema lo que hacemos es usar la función:
    //fgets(variable, numero(longitud máxima), stdin);  tiene 3 parametros.
    //Lo que guarda es toda la frase completa.



    //Para los boleanos tomamos al entero 1 y 0 como verdadero y falso:
    int flag = 1;
    printf("Estas son las variables en un entorno local: %i,\n%.2f,\n%.2lf,\n%c,\n%d",a,b,c,x,flag);


    //Estamos imprimiendo una variable declarada en un entorno global (utilizando .2 después del % declaramos la cant de decimalesa mostrar)
    printf("\nVariable en un entorno global: %.2f",PI);

    printf("\nVariable en un entorno global: %.3f",PI2);
    //Que pasa si nombro una variable con el nombre de PI?
    //int PI = 10; Nos arroja un alerta...

    //Caracteres de escape (\t tabulador horizonal)
    printf("\nHola Mundo\nQue pasa con esto\bcomo\tse\tordena\testo \"holamundo\"");
    system("PAUSE");

    //Operadores aritméticos:
    int numero = 10;
    numero++;
    printf("\n%i",numero);
    numero--;
    printf("\n%i",numero);
    numero+=10;
    printf("\n%i",numero);
    numero-=5;
    printf("\n%i",numero);

    //Operadores de comparación:
    printf("\n\nOperadores de comparacion\n<,\n>,\n<=,\n>=,\n==,\n!=");

     //Operadores de Lógicos:
    printf("\n\nOperadores de Lógicos\n||-->or\n&&-->and\n!-->not");

    //Cuando y por qué utilizamos el --> fflush(stdin); LIMPIEZA LUEGO DE UN SCANF A UN CARACTER O STRING
    /* Limpiar caracteres no deseados: La razón principal por la que alguien podría usar fflush(stdin); es para eliminar caracteres no deseados, como caracteres de nueva línea, del búfer de entrada después de una llamada a scanf u otras funciones de entrada. Esto se hace para evitar que los caracteres no deseados afecten a las futuras operaciones de entrada. Sin embargo, como se mencionó anteriormente, este enfoque no es seguro ni portátil. */

    //Código ejemplo:
    ejemplo();

    return 0;
}