#include <stdio.h>

int main()
{
    int x = 5;
    int *p = &x;

    printf("Valore di x: %d\n", x);

    *p = x * 2;

    printf("Valore raddoppiato: %d", *p);

    return 0;
}