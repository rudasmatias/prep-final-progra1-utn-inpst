#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int escribirArchivo(){

    //Se puede escribir explicitamente el directorio donde quiero que se cree el archivo
    FILE *pArchivo = fopen("alumnos.txt","w");

    fprintf(pArchivo, "Empezamos a escribir en archivos.\n");
    fprintf(pArchivo, "Segunda línea escrita.\n");
    fprintf(pArchivo, "Adios Matias.\n");

    fclose(pArchivo);

    //El return 0 no da por finalizada un función de forma correcta. El 1 es por si encuentra una falla.
    return 0;
};

int anexar(){

    //Se puede escribir explicitamente el directorio donde quiero que se cree el archivo
    FILE *pArchivo = fopen("alumnos.txt","a");

    fprintf(pArchivo, "Me olvidé esta frase.\n");


    fclose(pArchivo);

    //El return 0 no da por finalizada un función de forma correcta. El 1 es por si encuentra una falla.
    return 0;
};

int leerArchivo(){

    char linea[100];

    FILE *pArchivo = fopen("alumnos.txt","r");

    //LA FUNCIÓN fgets(arreglo de caracteres, tamaño del arreglo, puntero al archivo a leer)
    //fgets luego de ejecutarse aumenta el valor del puntero, es decir te deja el valor en el siguiente
    //espacio de memoria
    //Si lee algo recibirá la cadena, sino recibe nada recibirá un NULL, es por eso que podemos manejar 
    //Los archivos, lo mismo en el caso de que existan o no

    while (fgets(linea,sizeof(linea),pArchivo) != NULL) printf("%s",linea);

    fclose(pArchivo);

    return 0;

};

void curiosidades(){
        //algo curioso:
    /*
    a = 0x10;: Esto representa el número en formato hexadecimal. En hexadecimal, 0x10 es igual a 16 en decimal.
    b = 010;: Esto representa el número en formato octal. En octal, 010 es igual a 8 en decimal.
    */
    int a =0x10; //-->Lo traduce a decimal
    int b =010; //-->Lo traduce a decimal
    printf("%d",b+a);
    printf("\n");
    int x = 10;
    x++;
    int y = x++ + 20;
    
    printf("%d,%d",x,y);

    //Error
    // float b = 21.0;
    // b %= 3.0;
    // printf("%f",b);

    /*
    The main disadvantages of C language are:
    No Garbage Collection
    Inefficient Memory Management
    Low level of abstraction
    Lack of Object Orientation
    */

   //Se realiza un redonde al plicar el operador de decimales
    float q = 23.456;
    printf("%.2f",q);

    //The "&" operator is known as 'Address Of' operator which is used to access the address of a variable.
}

int main()
{
    //Cadenas : 
    //si usamos fgets(variable, tamaño,stdin) lo que se escriba luego de la variable será en una nueva línea.
    /*char frase[100];
    printf("Hola, escribre una frase: ");
    fgets(frase,sizeof(frase),stdin);
    printf("Tu frase es: \"%s\"",frase); */

    //Punteros es: una variable que almacena una dirección en la memoria de nuestra variable
    //algo que apunta a una dirección de memoria
 
    int entero = 2;
    int *pEntero = &entero;

    double decimal = 2.5;
    double *pDecimal = &decimal;
    char letra = 'a';
    char *pLetra = &letra; // es lo mismo que char *pLetra; pLetra = &letra

    //definicion del puntero directamente
    printf("%p\n",pEntero);
    printf("%p\n",&entero);
    
    //desreferenciar un puntero:
    //El operador * es el operador de ‘des referencia’.  
    /*
    Des referenciar una variable puntero es obtener el dato almacenado en la dirección contenida en el 
    puntero. Asignarle un  valor a  p  es darle el  valor de  una dirección  de un dato  tipo  entero.  Así,  si  se 
    tiene int a=3; la asignación p=&a le asigna a p la dirección de a
    */
    printf("%i\n",entero);
    printf("%p\n",&entero);

    //valor dentro de la direccion de memoria
    printf("%i\n",*pEntero);

    //Archivos

    //Escribir en archivos:
    escribirArchivo();
    anexar();

    //leer en archivos:
    leerArchivo();

    //Curiosidades:
    curiosidades();

    
    return 0;
    
}