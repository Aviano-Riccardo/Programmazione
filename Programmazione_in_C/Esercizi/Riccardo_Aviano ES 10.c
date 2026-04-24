/* Scrivi un programma che legge una serie di numeri interi positivi terminanti con l'immissione del numero 0 e ne cerca
il vaore minimo visualizzando sullo schermo. */

#include <stdio.h>

int main()
{
    int numero;
    int minore = 0;
    int cont = 0;
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);
    minore = numero;

    while (numero != 0)
    {
        printf("Insersci un numero intero positvo (inserisci 0 per terminare il programma): ");
        scanf("%d", &numero);

        if (numero > 0)
        {
            if (cont == 0)
            {
                minore = numero;
                cont = cont +1;
            }

            else if(numero < minore)
            {
                minore = numero;
            }
        }
    }
    
    if (cont == 0)
    {
        printf("Non e' stato inserito nessun valore positivo.");
    }

    else
    {
        printf("Il valore minimo da te inserito vale: %d", minore);
    }

    return 0;
}