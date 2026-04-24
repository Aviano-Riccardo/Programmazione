#include <stdio.h>
int main() 
{
    int a = 10;
    int *p = &a;
    printf("Indirizzo di a: %p\n", p);
    printf("Valore di a : %d\n", *p); //il valore di a è 10
    *p = 20; // il valore di a diventa 20
    printf("Indirizzo di a: %p\n", p); 
    printf("Nuovo valore di a: %d\n", a);

    return 0;
}