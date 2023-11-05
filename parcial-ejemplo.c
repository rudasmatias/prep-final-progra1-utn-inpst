#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define CANT_PROV 3

typedef struct
{
  int prov;       // Provincia
  int distrito;   // Dentro de las Provincias tenemos distintos distritos que serian los barrios
  int segmento;   // Los segmentos serian las manzanas dentro de los Barrios
  int Habitantes; // Casas censados
} registro;

void tecla(void);
void mostrarRegistros(registro[], int);
void cargarLista(int[], registro[], int *);
int menprin(void);
void Opcion1(registro[], int);
void Opcion2(registro[], int);

int main()
{

  
  int lista[100] = {1349, 2317, 1246, 1214, 1149, 3229, 2446, 2445, 2435, 2113, 2239, 3213, 2317, 2157, 3327,
                  2136, 1426, 3124, 1453, 3452, 1138, 3358, 3329, 2318, 3228, 2236, 3326, 3315, 3455, 3354,
                  1314, 1154, 3231, 1211, 1212, 1127, 1359, 1159, 1148, 1127, 3216, 1114, 1444, 1445, 3458,
                  1457, 3217, 1137, 2237, 1317, 3135, 3135, 2445, 2155, 2214, 3134, 2134, 3324, 2244, 1254,
                  1232, 2142, 1413, 1213, 1424, 2234, 1344, 3444, 3134, 2115, 2325, 2215, 3446, 1126, 1136,
                  2233, 1211, 3343, 1433};

  registro reg[100]={0,0,0,0}; // SERIA EL REGISTRO YA CARGADO CON PROVINCIA, DISTRITO, SEGMENTO Y HABITANTES
  int op;            // op seria la opcion a pulsar para contestar las preguntas del menu
  int elementos = 100; // cantidad original maxima del vector
  cargarLista(lista, reg, &elementos);
  // aqui ya elementos tendra que tener los 79 que se leyeron NO PASARLO A MANO !!!! OjO
  // Ahora reg[] contiene los valores desglosados del censo!!!

  // imprimimos los valores para verificar
  mostrarRegistros(reg, elementos);
  do
  {
    op = menprin();
    switch (op)
    {
    case 1:
    {
      system("cls");
      Opcion1(reg, elementos); // ESTA OPCION CALCULA HABITANTES POR PROVINCIA
      tecla();
      break;
    }
    case 2:
    {
      system("cls");
      Opcion2(reg, elementos); // ESTA OPCION CALCULA TOTAL DE HABITANTES
      break;
    }
    }
  } while (op < 3);
  tecla();
  printf("\n\n \t\t***** SALIENDO DEL PROGRAMA !!! *****");
  return (0);
}

void cargarLista(int x[], registro reg[], int *elementos)
{ int i=0,j=0;

  for(i=0;i<(*elementos);i++){
    reg[i].prov = x[i] / 1000;
    reg[i].distrito = (x[i] / 100) % 10;
    reg[i].segmento = (x[i] / 10) % 10;  
    reg[i].Habitantes = x[i] % 10;   
  }

  tecla();
}

void mostrarRegistros(registro reg[], int elementos)
{

  int i;
  printf("\n\n CONTENIDO DE LOS CAMPOS EN MEMORIA");
  printf("\n\n PROVINCIA.\t\tDISTRITO\tSEGMENTO\t HABITANTES\n\n");
  for (i = 0; i < elementos; i++)
  {
    if (reg[i].prov != 0){
      printf("Registro %2d: Provincia=%2d, Distrito=%2d, Segmento=%d, Habitantes=%2d\n",
            i + 1, reg[i].prov, reg[i].distrito, reg[i].segmento, reg[i].Habitantes);        
    }
  
  }
  tecla();
  system("cls");
}

void Opcion1(registro reg[], int elementos)
{ int contBA=0;
  int contC=0;
  int contER=0;
  int i;

  for(i=0;i<elementos;i++){
    if(reg[i].prov==1){
      contBA += reg[i].Habitantes;
    }else if (reg[i].prov==2)
      {
        contC += reg[i].Habitantes;
      }else if(reg[i].prov==3)
        {
          contER += reg[i].Habitantes;
        }
  }
  
  // esta es la opcion 1 donde tendras que  
  // calcular el número total de habitantes por provincia y mostrarlo en pantalla
  // te dejo el vector de provincias para informar mas personalizado
  
  // char nomProv[CANT_PROV][15] = {"Buenos Aires", "Cordoba", "Entre Rios"};
    printf("__________________________________________\n");
    printf("Buenos Aires: %d\tCordoba: %d\tEntre Rios: %d\n",contBA,contC,contER);
    printf("__________________________________________\n");
  
  tecla();
}

void Opcion2(registro reg[], int elementos)
{ 
  int i,acumHab=0;
  
  for(i=0;i<elementos;i++){
    acumHab += reg[i].Habitantes;
  };

  printf("__________________________________________\n");
  printf("Cantidad total de habitantes: %d\n",acumHab);
  printf("__________________________________________\n");
  // estas en la opcion 2 donde tenes que
  //calcular el número total de habitantes en todas las provincias y muestra el resultado en pantalla
 

  tecla();
}

int menprin(void)
{
  int op;
  do
  {
    system("cls");
    printf("\n\t\t\t\t\t*****MENU PRINCIPAL*****\n\n");
    printf("\n\n\t\t\t \t - RESULTADO HABITANTES POR PROVINCIA     <1>\n");
    printf("\n\n\t\t\t \t - RESULTADO CENSO GENERAL DE HABITANTES  <2>\n");
    printf("\n\n\t\t\t \t - SALIR                                  <3>\n");
    printf("\n\n\n\t\t\t INGRESE OPCION-->");
    scanf("%d", &op);
  } while (op < 1 || op > 3);
  return (op);
}

void tecla(void)
{
  printf("\n\nPRESIONE CUALQUIER TECLA PARA CONTINUAR!!!\n");
  getch();
}
