#include <stdio.h>
#include <stdlib.h> //per rand() e srand()
#include <time.h> //per time()
#define N 10

int main()
{
    srand (time(NULL)); // srand è l'inizializzazione del generatore di numeri random
    int numeri[N];
    int somma = 0;
    float media;

    printf("Numeri generati: ");
    for (int i = 0; i < N; i ++)
    {
        numeri[i] = rand() % 100 + 1; // Genera un numnero tra 0 e 99, aggiungendo 1 genera un numero tra 1 e 100
        printf("%d ", numeri[i]);
        somma = somma + numeri[i];
    }

    printf("\n");

    media = somma / N;

    printf("Media: %.2f \t", media);

    return 0;
}