#include <stdio.h>

int main(){

    //Sentencia:
    printf("Hola mundo!!");
   
    //Estructura secuencial:
    int a = 10;
    int b = 15;
    int resultado = a + b ;
    printf("El resultado de la suma es: %i",resultado); 

    //Estructura condicional simple (solo camino verdadero)
    int c = 15;
    int d = 2;
    if(c>d){
        printf("\nc es mayor que d");
    } 
 
    //Estructura condicional compuestas (camino verdadero o falso)
    if(c>d){
        printf("\nc es mayor que d");
    }else{
        printf("\nd es mayor que c");
    }

    printf("\nIngresar 3 notas:");
    int notas[3], suma = 0;
    for(int i =0; i<3;i++ ){
        printf("\nEscriba la nota numero %i: ",i+1);
        scanf("%i",&notas[i]);
        suma+=notas[i];
    }


    if(suma/3 >= 7){
        printf("\nEl alumno ha promocionado la materia");
    }

    int digitos2 = 3;
    if(digitos2/10>=1){ //o digito2>=10
        printf("\nEs un numero de 2 digitos");
    }else{
        printf("\nEs un numero de 1 digito");
    } 

    //Estructura condicional anidada (Es una combicacion de simple y compuesta)
    char vocal = 'b';

    if(vocal == 'a'){
        printf("\nLa letra es una vocal");
    }else if (vocal == 'e')
    {
        printf("\nLa letra es una vocal");
    }else if (vocal == 'i')
    {
        printf("\nLa letra es una vocal");
    }else if (vocal == 'o')
    {
        printf("\nLa letra es una vocal");
    }else if (vocal == 'u')
    {
        printf("\nLa letra es una vocal");
    }else{
        printf("\nLa letra no es una vocal");
    }

    //o utilizamos el switch, generalmente para menus, este evalua enteros o letras, no float
    //no evalúa expresiones
    switch (vocal)
    {
        case 'a':
            printf("\nLa letra es una vocal");
            break;
        case 'e':
            printf("\nLa letra es una vocal");
            break;
        case 'i':
            printf("\nLa letra es una vocal");
            break;
        case 'o':
            printf("\nLa letra es una vocal");
            break;
        case 'u':
            printf("\nLa letra es una vocal");
            break;
        default:
            printf("\nLa letra no es una vocal");
            break;
    }
    
    //Estructuras repetitivas:
    //While --> Cuando es falsa la condición sale del bucle, por lo que la misma debe tener a la variable que haga que salga
    //Siempre debe tener un valor inicializado para poder aumentar y salir de la condición
    int j = 0;
    while (j < 10)
    {
        j++;
    }
    printf("\nEl valor de j es:  %i",j);

    //Otro ejemplo:
    int xx, sum, value, prom;
    int k = 1;
    sum = 0;
    while (k < 10){
        printf("\nIngrese un valor:");
        scanf("%i",&value);
        sum+=value;
        k++;
    }
    printf("\nEl valor final de la sumatoria es de: %i", sum);

    return 0;
}