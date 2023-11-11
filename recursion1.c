#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int number){

    if (number == 0)  return 1;

    if (number > 0) return number * factorial(number-1);

    //para number = 5 --> 5* factorial(4)-->5*24
    //para number = 4 --> 4* factorial(3)-->4*6
    //para number = 3 --> 3* factorial(3)-->3*2
    //para number = 2 --> 2* factorial(1)-->2*1
    //para number = 1 --> 1* factorial(0)-->1*1
    //para number = 0 --> 1


};

int sumaRecursiva(int a){

    if(a==1) return 1;

    if(a>0) return a + sumaRecursiva(a-1);

}; 

int potenciaRecursiva(int base, int exponente){
    
    if(exponente == 0) return 1;

    if(exponente > 0) return base * potenciaRecursiva(base, exponente -1);

    //base ° 0 --> 1
    //base ° 1 --> base
    //base ° 2 --> base * base
    //base ° 3 --> base * base * base
};

int fibonacci(int n) {
    //n = 1 -->1
    //n = 2 --> 2 - 1 + 2-2 =1
    //n = 3 --> 3 - 1 + 3-2 =2
    if(n<=1){
        return n;
    }else{
        return fibonacci(n-1)  + fibonacci(n-2);
    }
}

int cuentaRegresiva(int num){

    printf("%i\n",num);
    if(num == 0) return 0;
    return cuentaRegresiva(num-1);

}

int main(){

    int number;
    printf("Ingrese un numero para calcular su factorial:");
    scanf("%i",&number);
    int a;
    //Quiero que se valide que el numero ingresado sea mayor a 0.
    while(number<0){
        printf("Has ingresdo un numero menor a 0\n");
        printf("Ingrese un numero entero mayor o igual a 0: ");
        scanf("%i",&number);
    }
    a = factorial(number);
    printf("El factorial de %i es %i", number, a);

    int numero;
    printf("\nIngrese un numero para calcular la suma de primeros n numeros enteros:");
    scanf("%i",&numero);
    int suma;
    //Quiero que se valide que el numero ingresado sea mayor a 0.
    while(numero<0){
        printf("Has ingresdo un numero menor a 0\n");
        printf("Ingrese un numero entero mayor o igual a 0: ");
        scanf("%i",&numero);
    }
    suma = sumaRecursiva(numero);
    printf("la suma de %i es %i", numero, suma);

    int base;
    int exponente;
    printf("\nIngrese un numero como base de una potencia:");
    scanf("%i",&base);
    printf("\nIngrese un exponente de una potencia (mayor a 0):");
    scanf("%i",&exponente);
    int potencia;
    potencia = potenciaRecursiva(base, exponente);
    printf("La potencia  de %i a la %i es %i", base, exponente, potencia); 


    int N;
    printf("Ingrese el valor de N para el término N-ésimo de Fibonacci: ");
    scanf("%d", &N);
    printf("El término %d de la secuencia de Fibonacci es: %d\n", N, fibonacci(N)); 

    int t;
    printf("Ingrese un valor para una cuenta regresiva: ");
    scanf("%d", &t);
    cuentaRegresiva(t);


    return 0;
}