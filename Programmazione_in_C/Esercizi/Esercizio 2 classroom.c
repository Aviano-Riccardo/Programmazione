// Leggi tre numeri e individua il minore e il maggiore.

#include <stdio.h>

int main()
{
    int numero, numero2, numero3;
    int maggiore = numero;
    int minore = numero;

    printf("Inserisci il primo numero: ");
    scanf("%d", &numero);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);
    printf("Inserisci il terzo numero: ");
    scanf("%d", &numero3);

    if(numero2 > numero && numero2 > numero3)

    {
       maggiore = numero2;
    }

    else if(numero3 > numero && numero3 > numero2)

    {
        maggiore = numero3;

    }

    if(numero2 < numero && numero2 < numero3)

    {
        minore = numero2;
    }

    else if(numero3 < numero2 && numero3 < numero)
    
    {
        minore = numero3; 
    }

    printf("Il valore %d e' il maggiore. ", maggiore);
    printf("Il valore %d e' il minore.", minore);

    return 0;
}