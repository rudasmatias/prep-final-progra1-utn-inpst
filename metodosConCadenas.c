#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    Recuerda que C trata las cadenas de caracteres como arreglos de caracteres, y debes ser cuidadoso para evitar desbordamientos de búfer y asegurarte de que las cadenas tengan un carácter nulo ('\0') al final.
    */

    /* Libreria string.h */

    char cadena[] = "Hola, Mundo!";
    int longitud = strlen(cadena);
    // longitud ahora contiene la cantidad de caracteres en la cadena

    char origen[] = "Hola";
    char destino[20];
    // Copia completa
    strcpy(destino, origen);

    // Copia parcial (hasta n caracteres)
    strncpy(destino, origen, 3);
    // Al final, destino contiene "Hol" en ambos casos

    char cadena1[] = "Hola";
    char cadena2[] = ", Mundo!";
    char resultado[20] = "Saludo: ";

    // Concatenación completa
    strcat(resultado, cadena1);

    // Concatenación parcial (hasta n caracteres)
    strncat(resultado, cadena2, 5);
    // Al final, resultado contiene "Saludo: Hola, Mun"

    char cadena1[] = "Hola";
    char cadena2[] = "Hola";

    // Comparación completa
    int comparacion1 = strcmp(cadena1, cadena2);

    // Comparación parcial (hasta n caracteres)
    int comparacion2 = strncmp(cadena1, cadena2, 3);

    // Comparación sin distinguir mayúsculas y minúsculas
    int comparacion3 = strcasecmp(cadena1, cadena2);

    // Comparación sin distinguir mayúsculas y minúsculas hasta n caracteres
    int comparacion4 = strncasecmp(cadena1, cadena2, 3);
    // Las variables comparacion1, comparacion2, comparacion3, comparacion4 contienen los resultados de las comparaciones


    //Búsqueda de subcadena
    char frase[] = "Este es un ejemplo";
    char subcadena[] = "ejemplo";
    
    char *posicion = strstr(frase, subcadena);
    // La variable posición apunta al comienzo de la subcadena en la frase o NULL si no se encuentra
    return 0;
}