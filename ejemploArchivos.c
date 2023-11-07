//ACLARACIÓN!! EL ARCHIVO SE DEBE ENCONTRAR EN LA MISMA CARPETA QUE EL EJECUTABLE O SU RESPECTIVA RUTA DESDE EL ESCRITORIO
#include <stdio.h>

int main() {
    FILE *archivo;
    archivo = fopen("datos.txt", "r");

    //Función fopen
    // nombre_archivo: Es una cadena que especifica el nombre o la ruta del archivo que deseas abrir.
    // modo: Es una cadena que indica el modo en el que deseas abrir el archivo. Los modos comunes incluyen "r" para lectura (read), "w" para escritura (write), "a" para agregar (append), "rb" y "wb" para abrir en modo binario, entre otros.
    
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
        /*El valor 1 es un código de retorno que se usa para indicar que ocurrió un error. El código de retorno es una convención en 
        la programación que permite a un programa comunicar su estado de finalización o cualquier error que haya ocurrido. Un valor distinto de cero (en este caso, 1) indica que el programa terminó con un error. */
    }

    char linea[100];  // Supongamos que cada línea del archivo tiene una longitud máxima de 100 caracteres

    // La función fgets se utiliza para leer una línea de texto desde un archivo en C. Aquí está la explicación detallada de la expresión fgets (linea, sizeof(linea), archivo):

    // linea: Esto es un puntero a una cadena de caracteres (un array de caracteres) donde se almacenará la línea de texto que se lee desde el archivo. La línea leída se almacena en esta cadena de caracteres.

    // sizeof(linea): sizeof es un operador que devuelve el tamaño en bytes de una variable o tipo de datos. En este caso, sizeof(linea) devuelve el tamaño del array linea. Esta expresión se utiliza para indicar a fgets cuántos caracteres puede leer y almacenar en la cadena linea. Es importante tener en cuenta que sizeof(linea) proporciona el tamaño total del array, por lo que determina cuántos caracteres pueden almacenarse en linea.

    // archivo: Es un puntero a la estructura de archivo FILE que representa el archivo desde el cual se leerá la línea. Este es el archivo que previamente abriste con fopen.

    while (fgets(linea, sizeof(linea), archivo) != NULL) {
        // Procesar la línea leída, por ejemplo, imprimirla
        printf("%s", linea);
    }

    fclose(archivo);  // Cerrar el archivo después de leerlo

    return 0;// Indicación de finalización exitosa
}