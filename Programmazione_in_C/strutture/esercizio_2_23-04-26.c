#include <stdio.h>

void scambia(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a;
    int b;
    
    printf("Inserisci valore di a: ");
    scanf("%d", &a);

    printf("Inserisci valore di b: ");
    scanf("%d", &b);

    printf("Valore iniziale di a: %d\n", a);
    printf("Valore iniziale di b: %d\n", b);

    scambia(&a, &b);

    printf("Valore finale di a: %d\n", a);
    printf("Valore finale di b: %d", b);

    return 0;
}