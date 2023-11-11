#include <stdio.h>

//Cuando paso un parámetro de la siguiente forma:
//int b = 0;
//sumar(int b) -->Estoy pasando una copia del valor de b, que es 0. No estoy pasandole la referencia para cambiar el valor en ese lugar.
//sumar(int *b)-->Quiere decir que acepta un puntero (una señal directa al espacio de memoria de la variable del argumento)
//sumar(&x) -->Quiere decir que se pasa como parámetro la dirección de memoria de la variable a modificar con el &

int sumar  (int num1,int  num2){
    return num1 + num2;
}

void scanInteger(int *a){
    scanf("%i",a);
}

void scanFloat(float *a){
    scanf("%f",a);
}

void scanDouble(double *a){
    scanf("%lf",a);
}

int main(){

    int b;
    float b2;
    double b3;
    int *a;

    printf("Ingrese el valor de b:");
    scanInteger(&b);

    printf("Ingrese el valor de b2:");
    scanFloat(&b2);
    
    printf("Ingrese el valor de b3:");
    scanDouble(&b3);

    b = 10;
    
    printf("Valores de \nb:%i, \nb2:%.2f, \nb3:%.2lf",b,b2,b3);
    printf("\nPuntero %i",a);//Forma correcta del valor de la dirección de memoria en decimal
    printf("\nPuntero %a",a);
    printf("\nPuntero %p",a); //Forma correcta del valor de la dirección de memoria en hexagesimal
    printf("\nPuntero %p",(void *)a);
    return 0;
    
    
}
