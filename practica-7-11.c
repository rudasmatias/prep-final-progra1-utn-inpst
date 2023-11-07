#include <stdio.h>
#include <math.h>

int main(){

    printf("Practicas de ciclos");

    //While:es útil cuando no sabes cuántas veces necesitas repetir un bloque de código y deseas repetirlo mientras una condición sea verdadera. 

    int contador = 0;
    while (contador<10)
    {
        printf("\n%i)Practicas de ciclos while",contador+1); 
        //Aumento la variable del contador para salir del bucle...
        contador++;
    }
    
    //Ejemplos practicos de uso: Entrada y validación de datos
    int numero;
    printf("\nIngrese un numero positivo: ");
    scanf("%d", &numero);

    while (numero <= 0) {
        printf("\nNumero no válido. Ingrese un número positivo: ");
        scanf("%d", &numero);
    }

   
    //Procesamiento de archivos y lectura de datos: Los ciclos while son comunes al leer datos de archivos o streams, ya que puedes continuar leyendo y procesando datos hasta que alcances el final del archivo o se cumpla alguna condición específica.
    //Explicación en archivo ejemploArchivos.exe

    printf("\n\n"); 

    //DoWhile: Ejecuta al menos una vez el bloque de instrucciones y luego evalúa la condición.
    int countDoWhile = 0;
    do
    {
        printf("\n%i)Practicas de ciclos doWhile",countDoWhile+1);
        countDoWhile++;
    } while (countDoWhile<10);

    printf("\n\n"); 
    //Aplicaciones:
    /* Menús y entradas de usuario: El ciclo do-while es útil cuando deseas crear un menú de selección para que los usuarios elijan opciones, y deseas que el menú se muestre al menos una vez. Luego, verificas la entrada del usuario para determinar si debe repetirse el menú o finalizar el programa. */
    int opcion;
    do {
        printf("Menú:\n");
        printf("1. Opción 1\n");
        printf("2. Opción 2\n");
        printf("3. Salir\n");
        printf("Elija una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Has elegido la Opción 1.\n");
                break;
            case 2:
                printf("Has elegido la Opción 2.\n");
                break;
            case 3:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción no válida. Inténtalo de nuevo.\n");
        }
    } while (opcion != 3);
    printf("\n\n"); 
    
    /*Validación de entrada de usuario: Puedes utilizar un ciclo do-while para solicitar datos al usuario y validar que los datos ingresados sean correctos antes de continuar con el programa. */
    int edad;
    char respuesta;

    do {
        printf("¿Cuál es tu edad? ");
        scanf("%d", &edad);

        if (edad < 0) {
            printf("Edad no válida. Introduce una edad válida.\n");
        } else {
            printf("Tu edad es: %d\n", edad);
        }

        printf("¿Deseas ingresar otra edad? (S/N) ");
        scanf(" %c", &respuesta); // Espacio en blanco para evitar problemas con el buffer de entrada

    } while (respuesta == 'S' || respuesta == 's');

    printf("\n\n"); 
    // //For 
    /*    Es útil cuando necesitas ejecutar un bloque de código un número específico de veces. 
    Es una estructura de control de flujo que se utiliza comúnmente en situaciones en las que se conoce de 
    antemano la cantidad de iteraciones que se deben realizar. Lo utilizamos para recorrer arrays o matrices  */
    int count = 10;

    for (int i = 0; i < count; i++)
    {
         printf("\n%i)Practicas de ciclos for",i+1);
    }

    printf("\n\n"); 

    //Ejemplo de bucle for con array
    int numeros[] = {10, 20, 30, 40, 50};
    int longitud = sizeof(numeros) / sizeof(numeros[0]);

    for (int i = 0; i < longitud; i++) {
        printf("\n%d", numeros[i]);
    }



    //Ejemplo de bucle for con una matriz
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("\n\n"); 

    int filas = 3;
    int columnas = 3;
      
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); // Para imprimir una nueva línea después de cada fila
    }

    return 0;
}