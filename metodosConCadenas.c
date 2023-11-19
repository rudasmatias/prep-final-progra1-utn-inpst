#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    Recuerda que C trata las cadenas de caracteres como arreglos de caracteres, y debes ser cuidadoso para evitar desbordamientos de búfer y asegurarte de que las cadenas tengan un carácter nulo ('\0') al final.
    */
   //Obtener una cadena (1 o más palabras)
   char palabra1[10];
   gets(palabra1); //Esta funcion al hacer enter, directamente me agrega un '\0' al final de la palabra.

   //Obtener por teclado una cadena con espacios en el medio:
    char programador[16];
    printf("Escriba un nuevo nombre:");
    fgets(programador,sizeof(programador),stdin);
    printf("Nombre del programador: %s",programador);

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
    int comparacion1 = strcmp(cadena1, cadena2); //si son iguales devuelve 0, si la primera es mayor >0, si la 2da es mayo <0

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


    /* Libreria ctype.h */

/*  isalnum(caracter): devuelve cierto (un entero cualquiera distinto de cero) si carácter es una letra 
    o dígito, y falso (el valor entero 0) en caso contrario. 
    
    isalpha(caracter): devuelve cierto si carácter es una letra, y falso en caso contrario. 
    
    isblank(caracter): devuelve cierto si carácter es un espacio en blanco o un tabulador. 
    
    isdigit(caracter): devuelve cierto si carácter es un digito, y falso en caso contrario. 
    
    isspace(caracter):  devuelve  cierto  si  carácter  es  un  espacio  en  blanco,  un  salto  de  
    línea,  un retorno de carro, un tabulador, etc., y falso en caso contrario. 
    
    islower(caracter): devuelve cierto si carácter es una letra minúscula, y falso en caso contrario. 
    
    isupper(caracter): devuelve cierto si carácter es una letra mayúscula, y falso en caso contrario. 
    
    toupper(caracter):  devuelve  la  mayúscula  asociada  a  carácter,  si  la  tiene;  si  no,  devuelve  el 
    mismo carácter. 
    
    tolower(caracter):  devuelve  la  minúscula  asociada  a  carácter,  si  la  tiene;  si  no,  devuelve  el 
    mismo carácter. */


    //strtok
    char config[] = "Usuario: Juan\nContraseña: secreta\nPuerto: 8080";
    const char delimiters[] = ": \n";

    char *token = strtok(config, delimiters);

    while (token != NULL) {
        printf("Clave: %s - Valor: ", token);
        token = strtok(NULL, delimiters);
        if (token != NULL) {
            printf("%s\n", token);
        }
        token = strtok(NULL, delimiters);
    }

    //otro ejemplo
    char texto[] = "Nikola Tesla, un gran cientifico, (1865-1943) fue clave para la 'ciencia moderna'."; 
    char signosPuntuacion[] = " (,.)'"; 
    char *token; 
    
    printf("Texto inicial: %s\n\n", texto); 
    token = strtok( texto, signosPuntuacion); 
    
    do{ 
        printf("%s\n", token); 
        token=strtok(NULL,signosPuntuacion); 
    } while(token != NULL );


    return 0;
}