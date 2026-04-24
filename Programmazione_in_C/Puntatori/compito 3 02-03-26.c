#include <stdio.h>

int main()
{
    int a, b;

    printf("Inserisci un valore per a: ");
    scanf("%d", &a);
    printf("Inserisci un valoerw per b: ");
    scanf("%d", &b);

    int *p1 = &a;
    int *p2 = &b;

    printf("Valore di a: %d\n", *p1);
    printf("Valore di b: %d\n", *p2);

    return 0;
}