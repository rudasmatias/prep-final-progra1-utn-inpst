#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float x = 3.14;

    /* Libreria math.h */

    // Funciones trigonométricas
    float seno = sin(x);
    float coseno = cos(x);
    float tangente = tan(x);

    // Funciones exponenciales y logarítmicas
    float exponencial = exp(x);
    float logaritmoNatural = log(x);

    // Función valor absoluto
    float valorAbsoluto = fabs(-x);

    // Funciones redondeo
    float redondeoArriba = ceil(x);
    float redondeoAbajo = floor(x);
    float redondeo = round(x);

    // Potencia y raíz cuadrada
    float potencia = pow(x, 2);
    float raizCuadrada = sqrt(x);

    /* Libreria stdlib.h */
    
    //Inicio de semilla
    srand(time(NULL));

    // Generar un número aleatorio entre 1 y 10
    int numeroAleatorio = rand() % 10 + 1;

    // Convertir una cadena a un entero
    char cadenaEntera[] = "123";
    int numeroEntero = atoi(cadenaEntera);

    // Convertir una cadena a un número de punto flotante
    char cadenaFloat[] = "3.14";
    float numeroFloat = atof(cadenaFloat);

    // Casteo de un numero, otra alternativa a castear multiplicando  x1.00
    int suma = 10;
    float promedio = (float)suma/3;
    
    printf("%f",potencia);
    return 0;
}