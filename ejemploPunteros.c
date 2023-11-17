#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
    int a, b, *p, *q; 
    a=10; 
    b=20; 

    //la variable punto b , guarda la direccion de memoria de la variable a.  
    p=&a; 
    //la variable punto b , guarda la direccion de memoria de la variable a.  
    q=&b; 

    //&p es la direccion de memoria de la variable puntero, dentro de esta se guarda la direccion de memoria de a
/*     printf("Se ejecuta p=&a; q=&b;\n"); 
    printf("La variable a esta en %d y contiene %d\n", &a, a); 
    printf("La variable b esta en %d y contiene %d\n", &b, b); 
    printf("La variable p esta en %d, contiene %d y la direccion apuntada por p contiene %d\n",&p, p,*p); 
    printf("La variable q esta en %d, contiene %d y la direccion apuntada por q contiene %d\n",&q, q,*q); 
    printf("\nSe ejecuta *p=35:\n");  */

    *p=35; 
/*     printf("La variable a esta en %d y contiene %d\n", &a, a);
    printf("La variable p esta en %d , contiene %d y la direccion apuntada por p contiene %d\n",&p, p,*p); 
    printf("\nSe ejecuta b=65\n");  */

    b=65; 
/*     printf("La variable b esta en %d y contiene %d\n", &b, b); 
    printf("La variable q esta en %d , contiene %d y la direccion apuntada por q contiene %d\n ",&q, q,*q); 
    printf ("\nSe ejecuta *p=*q;\n");  */

/*     *p=*q; 
    if (*p==*q) printf ("las variables p y q contienen el mismo valor\n"); 
    else printf ("las variables p y q no contienen el mismo valor\n");


    if (p==q) printf ("las variables p y q apuntan a direcciones que contienen el mismo valor\n"); 
    else printf ("las variables p y q apuntan a direccones que no contienen el mismo valor\n");  */


    printf ("\nSe ejecuta p=q;\n"); 
    p=q; 

    if (*p==*q) printf ("las variables p y q contienen el mismo valor\n"); 
    else printf ("las variables p y q no contienen el mismo valor\n"); 

    if (p==q) printf ("las variables p y q apuntan a direcciones que contienen el mismo valor\n"); 
    else printf ("las variables p y q apuntan a direccones que no contienen el mismo valor\n");  

/*     printf("\nSe ejecuta a=100\n"); 
    a=100; 
    printf("La variable a esta en %d y contiene %d\n", &a, a); 
    printf("La variable b esta en %d y contiene %d\n", &b, b); 
    printf("La variable p esta en %d, contiene %d y la direccion apuntada por p contiene %d\n",&p, p,*p); 
    printf("La variable q esta en %d, contiene %d y la direccion apuntada por q contiene %d\n",&q, q,*q); 
    system ("pause"); 
 */

    return 0; 
} 

