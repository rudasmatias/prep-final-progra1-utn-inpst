#include <stdio.h>
#include <math.h>
#include <windows.h>


void  bucleWhile(){

    //Procesamiento de archivos y lectura de datos: Los ciclos while son comunes al leer datos de archivos o streams, ya que puedes continuar leyendo y procesando datos hasta que alcances el final del archivo o se cumpla alguna condición específica.
    //Explicación en archivo ejemploArchivos.exe

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
        printf("\nNumero no valido. Ingrese un número positivo: ");
        scanf("%d", &numero);
    }

   
}

void bucleDoWhile(){
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
        printf("Menu:\n");
        printf("1. Opcion 1\n");
        printf("2. Opcion 2\n");
        printf("3. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Has elegido la Opcion 1.\n");
                break;
            case 2:
                printf("Has elegido la Opcion 2.\n");
                break;
            case 3:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opcion no valida. Intentalo de nuevo.\n");
        }
    } while (opcion != 3);
    printf("\n\n"); 

    /*Validación de entrada de usuario: Puedes utilizar un ciclo do-while para solicitar datos al usuario y validar que los datos ingresados sean correctos antes de continuar con el programa. */
    int edad;
    char respuesta;

    do {
        printf("Cual es tu edad? ");
        scanf("%d", &edad);

        if (edad < 0) {
            printf("Edad no valida. Introduce una edad valida.\n");
        } else {
            printf("Tu edad es: %d\n", edad);
        }

        printf("Deseas ingresar otra edad? (S/N) ");
        scanf(" %c", &respuesta); // Espacio en blanco para evitar problemas con el buffer de entrada

    } while (respuesta == 'S' || respuesta == 's');
}

void bucleFor(){
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

    // Las variables declaradas dentro del bucle for tienen su propio scope, es decir que no existe fuera del bucle, tranquilamente podriamos
    // Tener una variable declarada en el main llamada i y otra dentro de los parámetros  del bucle
    int m = 15;
    for(int m = 0; m<5;m++){
        printf("\n%i",m);
    }
    printf("\n%i",m);

    //Otro ejemplo con más contadores dentro del argumento
    //Modificamos esos contadores en el ciclo
    int i,j,k=0; 
    for (i=0, j=0;  i<5 && j < 4 && k < 10; i++)
    {
        printf("i=%d j=%d k=%d\n",i,j++,k); 
        k+=2; 
    }
    
    
}

void practica(){

    //Se puede utilizar ternarios!!!
    int a = 8, b = 9, x = 5, y, z; 
    y = ( a > b ) ? 3 * a + b : 2 * a + b; 
    z = a <= 2 * x ? ( a < 6 ) ? 4 * a : 5 * a : 3 * a + 1; 
    printf ("y = %i z = %i \n", y, z); // y=25 z=40

}

void practica1(){
    fflush(stdin); 
    char tecla;
    printf("Presiona una tecla....");
    do{
        printf("\na= do , s = re, d= mi, f=fa, g=sol, h=la, j=si");
        scanf("%c",&tecla);
        switch (tecla)
        {
        case 'a':
            Beep(1045,500);
            break;
        case 's':
            Beep(580,400);
            break;
        case 'd':
            Beep(1300,500);
            break;
        case 'f':
            Beep(1370,400);
            break;
        case 'g':
            Beep(780,500);
            break;
        case 'h':
            Beep(870,500);
            break;
        case 'j':
            Beep(995,700); 
            break;
        default:
            Beep(870,500);
            Beep(870,500);
            Beep(870,500);
            Beep(870,500);
            Beep(870,500);
            Beep(870,500);
            break;
        }
        fflush(stdin); 
    }while(tecla == 'a' || tecla == 's' || tecla == 'd'|| tecla == 'f' ||tecla == 'g' ||tecla == 'h'||tecla == 'j' ); 
    
}

void practica2(){
    /* Se desea procesar información de una boletería de teatro, en donde se presenta un grupo 
    de obras, la cantidad de obras no está determinada previamente. Para ingresar los datos se 
    pide: 
    • Código de obra (código 0 cero para terminar el proceso). 
    • Para cada código de obra se lee un número no determinado de veces: 
    o Ubicación (fila y número), 
    o Precio de la entrada, 
    o Final del proceso de cada obra es fila 0 (cero). 
    Se desea para cada obra emitir: 
    • la recaudación total 
    • La fila más vendida 
    • Indicar el total de entradas vendidas para la fila 1 
    • Indicar total de entradas vendidas para asientos 20 y 21 (un solo total por la venta 
    de ambos) 
    • Al finalizar el procesamiento el total recaudado en todas las obras y cuál es la obra 
    que más recaudó. */
}

int main(){

    printf("Practicas de ciclos");
    //While:es útil cuando no sabes cuántas veces necesitas repetir un bloque de código y deseas repetirlo mientras una condición sea verdadera. 
    bucleWhile();
    printf("\n\n"); 

    //DoWhile: Ejecuta al menos una vez el bloque de instrucciones y luego evalúa la condición.
    bucleDoWhile();
    printf("\n\n"); 

    //For 
    /*    Es útil cuando necesitas ejecutar un bloque de código un número específico de veces. 
    Es una estructura de control de flujo que se utiliza comúnmente en situaciones en las que se conoce de 
    antemano la cantidad de iteraciones que se deben realizar. Lo utilizamos para recorrer arrays o matrices  */
    bucleFor();

    //Ejercios recomendados:
    practica();   
    practica1();
    practica2(); //Realizar programa

    return 0;
}