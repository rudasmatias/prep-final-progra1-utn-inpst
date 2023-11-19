#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){


    //matriz 3x5 -->Realizado en una tabla
    srand(time(NULL));
    int f, c, matriz[3][5];
    printf("\t|col 1\t|col 2\t|col 3\t|col 4\t|col 5\n");
    printf("-------------------------------------------\n");
    for(f=0;f<3;f++){
        printf("fila %i  ",f+1);
        for(c=0;c<5;c++){
            matriz[f][c]= rand() % 100 + 1;
            printf("|%i \t",matriz[f][c]);
            
        }
        printf("\n"); 
    }


    return 0;
}