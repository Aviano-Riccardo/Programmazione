#include <stdio.h>

int main()
{
    int a;
    int *p = &a;

    printf("Inserisci un valore per la variabile a: ");
    scanf("%d", &a);
    printf("Il valore di a vale: %d\n", a);

    int b;

    printf("Inserisci la variabile b: ");
    scanf("%d", &b);

    *p = b;

    printf("Il nuovo valore di a vale: %d", b);

    return 0;
}