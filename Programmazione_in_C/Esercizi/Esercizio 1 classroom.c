// Leggi due numeri e visualizzali in ordine crescente oppure decrescente in base alla richiesta di un utente. 

#include <stdio.h>

int main()
{
    int numero, numero2, maggiore, minore;
    char scelta;

    printf("Inserisci il primo numero: ");
    scanf("%d", &numero);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);

    if (numero < numero2)
    {
        maggiore = numero2;
        minore = numero;
    }

    else 
    {
        maggiore = numero;
        minore = numero2;
    }

    printf("Scegli se visualizzare i numeri in ordine crescente o decrescente. \n");
    printf("Qual'è la tua scelta? ");
    scanf(" %c", &scelta);

    if (scelta == 'c')

    {
        printf("L'ordine scelto è il crescente: %d, %d.", minore, maggiore);
    }

    else if (scelta == 'd')

    {
        printf("L'ordine scelto è il decrescente: %d, %d.", maggiore, minore);
    }
    else
    {
        printf("Valore inserito non valido.");
    }

    return 0;
}