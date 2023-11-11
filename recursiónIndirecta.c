#include <stdio.h> 
#include <stdlib.h> 
 
int par(int n); 
int impar(int n); 


int main() { 
    int x; 
    printf( "Introduzca un entero:\n " ); 
    scanf( "%d", &x ); 
    if (par(x)==1) 
        printf( "\n %d Es par\n", x); 
    else 
        printf( "\n %d Es impar\n", x); 
    system("Pause"); 
    return 0; 
}

int par(int n) { 
    if (n == 0) return 1; 
    return impar(n-1); 
} 
 
int impar(int n) { 
    if (n == 0) return 0; 
    return par(n-1); 
} 