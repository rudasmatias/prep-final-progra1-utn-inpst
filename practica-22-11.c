#include <stdio.h>

struct Rectangulo {
    float area;
    float perimetro;
};

// Función que devuelve un struct Rectangulo con área y perímetro calculados
struct Rectangulo calcularRectangulo(float base, float altura) {

    struct Rectangulo rect ={base * altura, 2 * (base + altura)};
    
    return rect;
}

struct Division {
    int cociente;
    int resto;
};

// Función que devuelve un struct Division con cociente y resto
struct Division dividir(int dividendo, int divisor) {
    struct Division resultado;
    resultado.cociente = dividendo / divisor;
    resultado.resto = dividendo % divisor;
    return resultado;
}

int main() {
    // Llamada a la función y obtención de un struct Rectangulo
    struct Rectangulo miRectangulo = calcularRectangulo(5.0, 3.0);

    // Imprimir resultados
    printf("Area del rectangulo: %.2f\n", miRectangulo.area);
    printf("Perimetro del rectangulo: %.2f\n", miRectangulo.perimetro);


    // Llamada a la función y obtención de un struct Division
    struct Division resultadoDivision = dividir(17, 5);

    // Imprimir resultados
    printf("Cociente: %d\n", resultadoDivision.cociente);
    printf("Resto: %d\n", resultadoDivision.resto);

    return 0;
}