#include <stdio.h>

int main() 
{
    int a = 10;
    int *p = &a;

    printf("Valore di a: %d\n", a); // valore di a
    printf("Indirizzo di a: %p\n", &a); // indirizzo di memoria di a
    printf("Indirizzo memorizzato in p: %p\n", p); // indirizzo memorizzato nel puntatore
    printf("Valore puntato da p: %d\n", *p); // il valore puntato dal puntatore

    return 0;
}