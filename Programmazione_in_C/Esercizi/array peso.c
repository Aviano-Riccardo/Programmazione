#include <stdio.h>

int main()
{
    int numeri[] = {1, 2, 3, 4, 5};
    int lunghezza = sizeof(numeri) / sizeof(numeri{0});

    printf("Quanto occupa un int: %d\n", sizeof(numeri));
    printf("Quanto occupa numeri[0]: %d\n", sizeof(numeri(0)));

    int somma = 0;

    for (int i = 0; i < lunghezza; i ++)
    {
        somma = somma + numeri[i];
    }

    printf("La somma degli elementi dell'array e': %d\n", somma);

    return 0;
}