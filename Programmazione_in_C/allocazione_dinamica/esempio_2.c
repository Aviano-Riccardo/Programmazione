#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float *prezzi;
    float somma = 0;

    printf("QUanti prodotti hai comprato: ");
    scanf("%d", &n);

    prezzi = (float*) malloc(n * sizeof(float));

    if (prezzi == NULL)
    {
        printf("Memoria piena");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Inserisci il prezzo del prodotto: ");
        scanf("%f", &prezzi[i]);

        somma = somma + prezzi[i];
    }

    printf("Totale spesa: %.2f Euro\n", somma);
    printf("Media per prodotto : %.2f Euro\n", somma / n);

    free(prezzi);
    prezzi = NULL;

    return 0;
}