#include <stdio.h>

int main()
{
    int a = 5;
    int b = 5;
    int *p1 = &a;
    int *p2 = &b;

    printf("Valore di a: %d\n", a);
    printf("Valore di b: %d\n", b);
    printf("Somma dei numeri: %d\n", *p1 + *p2);

    return 0;
}