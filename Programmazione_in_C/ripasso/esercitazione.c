#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int N = 5;

int sommaArray(int array[], int l);
int numeroMassimo(int array[], int l);
int conteggioPositivi(int array[], int l);

int main()
{
    int array[N];
    int max = 100;
    int min = 1;

    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        array[i] = min + rand() % (max - min + 1);
    }

    int l = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < l; i++)
    {
        printf("\t %d", array[i]);
    }

    int somma = sommaArray(array, l);
    printf("\nLa somma dei valori presenti nell'array vale: %d\n", somma);

    int numeromax = numeroMassimo(array, l);
    printf("Il numero massimo presente nell'array vale: %d\n", numeromax);

    int contpos = conteggioPositivi(array, l);
    printf("I numeri positvi presenti nell'array sono: %d\n", contpos);

    int scelta;
    printf("Vuoi generare un nuovo array? (1 = si - 0 = no): ");
    scanf("%d", &scelta);
    if (scelta == 1)
    {
        do
        {
            srand(time(NULL));

            for (int i = 0; i < N; i++)
            {
                array[i] = min + rand() % (max - min + 1);
            }

            int l = sizeof(array) / sizeof(array[0]);

            for (int i = 0; i < l; i++)
            {
                printf("\t %d", array[i]);
            }

            int somma = sommaArray(array, N);
            printf("\nLa somma dei valori presenti nell'array vale: %d\n", somma);

            int numeromax = numeroMassimo(array, N);
            printf("Il numero massimo presente nell'array vale: %d\n", numeromax);

            int contpos = conteggioPositivi(array, N);
            printf("I numeri positvi presenti nell'array sono: %d\n", contpos);

            printf("Vuoi generare un nuovo array? (1 = si - 0 = no): ");
            scanf("%d", &scelta);

            if (scelta == 0)
            {
                printf("Programma terminato.");
            }

        } while (scelta != 0);
    }
    else if (scelta == 0)
    {
        printf("Programma terminato.");
    }

    return 0;
}

int sommaArray(int array[], int l)
{
    int somma = 0;

    for (int i = 0; i < l; i++)
    {
        somma = array[i] + somma;
    }

    return somma;
}

int numeroMassimo(int array[], int l)
{
    int numeromax = 0;

    for (int i = 0; i < l; i++)
    {
        if (array[i] > numeromax)
        {
            numeromax = array[i];
        }
    }

    return numeromax;
}

int conteggioPositivi(int array[], int l)
{
    int contpos = 0;

    for (int i = 0; i < l; i++)
    {
        if (array[i] > 0)
        {
            contpos = contpos + 1;
        }
    }

    return contpos;
}