#include <stdio.h>

int main()
{
    int a;
    int *p = &a;

    printf("Inserisci un valore per la variabile a: ");
    scanf("%d", &a);

    printf("Il valore di a vale: %d e la sua cella di memoria e': %p", a, p);

    return 0;
}