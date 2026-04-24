#include <stdio.h>

void scambia(int a, int b)
{
    int t = *p1;
    *p1 = *p2;
    *p2 = t;
}

int main()
{
    int a, b;

    printf("Inserisci un valore per a: ");
    scanf("%d", &a);
    printf("Inserisci un valoerw per b: ");
    scanf("%d", &b);

    scambia(&a, &b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}