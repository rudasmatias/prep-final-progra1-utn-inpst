#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cantidadVocales(char palabra[]){

    int contador = 0;
    int largo = strlen(palabra);


    for (int i = 0; i < largo; i++)
    {
        if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u'){
            contador++;
        }
    }

    /*
    o
    
    contador
    while(string[i] != '\0'){
        if(condicion){codigo};
        contador++;
    }
    
    */
    
    return contador;
}

int main()
{

    //Repaso de conceptos de punteros:
    
/*  int a;
    int *punteroA;

    a=10;

    punteroA = &a;

    printf("Los valores de puntero por tipo se usa el porciento p para obtener el valor de la direccion de memoria en hexagesimal");
    printf("\nEl valor de la direccion de memoria es a: %p , %p",punteroA,&a);
    printf("\nEl valor del espacio de memoria del puntero es: %p",&punteroA);
    printf("\nEl valor que hay en a desde el puntero con desreferenciacion es: %i", *punteroA); */

    //Un array puede contener basura, si: no se lo inicializa o si quiero acceder a un valor por fuera de si longitud.
/*  int array[300];
    int array2[]={1,2,3};
    for (int i = 0, j=0; i < 300 || j<5; i++,j++)
    {
        printf("\npost %i, %i-",i+1,array[i]);
        printf("\npost %i, %i-",j+1,array2[j]);
    } */
    
    char palabra[20], palabra2[20],confirmacion;
    // do
    // {   
    //     printf("Por favor, ingrese una palabra: ");
    //     gets(palabra);
    //     int ctdVoc = cantidadVocales(palabra);
    //     //fflush(stdin);
    //     printf("La cantidad de vocales que posee esta palabra son/es : %i", ctdVoc);
    //     printf("\nDesea verificar la cantidad de vocales de otra palabra [s/n]: ");
    //     scanf("%c", &confirmacion);
    //     fflush(stdin);

    // } while ( confirmacion == 's' || confirmacion == 'S');
    // //Es mejor pensarlo desde el si -->  while ( confirmacion == 's' || confirmacion == 'S');
    // //while ( confirmacion != 'n' && confirmacion != 'N');
    // printf("Adios vuelva pronto!");


/*     printf("Por favor, ingrese una frase: ");
    gets(palabra);
    int cont1=0;
    int cont2=0;
    
    while(palabra[cont1] != '\0'){
        if(palabra[cont1] == ' ') {
            cont2++;
        }
        cont1++;
    }
    printf("La cantidad de palabras en la frase son: %i", cont2+1); */

    printf("Por favor, ingrese una palabra: ");
    gets(palabra);
    printf("Por favor, ingrese otra palabra: ");
    gets(palabra2);
      

    if(!strcmp(palabra,palabra2)){
        printf("Son iguales");
    }else if (strcmp(palabra,palabra2)>0)
    {
        printf("Palabra 1 es mayor alfabeticamente");
    }else{
        printf("Palabra 2 es mayor alfabeticamente");
    }
    

    return 0;
}