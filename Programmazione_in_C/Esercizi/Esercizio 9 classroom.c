// Leggi un numero e, dove è possibile, calcola la radice quadrata visualizzando il risultato, altrimenti comunica un messaggio d’errore.

#include <stdio.h>
#include <math.h>

int main()
{
    float n, radice;
    printf("Inserisci il valore per il quale vuoi calcolare la radice quadrata: ");
    scanf("%f", &n);
    if (n >= 0)
    {
        radice = sqrt(n);
        printf("La radice quadrata di %f vale: %4.2f", n, radice);
    }

    else
    {
        printf("Non è possibile calcolare la radice.");
    }

    return 0;
}