#include <stdio.h>
#include <stdlib.h>

int main()
{

    int FILAS = 3;
    int COLUMNAS = 3;

    int tateti[][3]={{1 , 1, 0},{1 , 1, 0},{1 , 1, 0}};

    for(int f = 0 ; f <FILAS; f++){
        printf("[ ");
        for(int c = 0; c<COLUMNAS;c++){
            printf("%i ",tateti[f][c]);
        }
        printf("]");
        printf("\n");
    }
    printf("***** ***** ***** ***** ***** ***** *****\n");
    for(int f = 0 ; f <FILAS; f++){
        printf("[ ");
        for(int c = 0; c<COLUMNAS;c++){
            if(tateti[f][c]){
                tateti[f][c] = 0;
                printf("%i ",tateti[f][c]);
            }else{
                tateti[f][c] = 1;
                printf("%i ",tateti[f][c]);
            }
            
        }
        printf("]");
        printf("\n");
    }

    return 0;
}