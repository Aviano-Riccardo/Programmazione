// Leggi tre numeri e visualizzali in ordine crescente oppure decrescente in base alla richiesta di un utente. 

#include <stdio.h>

int main()
{
    int numero, numero2, numero3;
    int maggiore, med, minore;
    char scelta;

    printf("Inserisci il primo numero: ");
    scanf("%d", &numero);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);
    printf("inserisci il terzo numero: ");
    scanf("%d", &numero3);

    if(numero2 > numero && numero2 > numero3)

    {
       maggiore = numero2;
    }

    else if(numero3 > numero && numero3 > numero2)

    {
        maggiore = numero3;

    }

    else if(numero2 < numero && numero2 < numero3)

    {
        minore = numero2;
    }

    else if(numero3 < numero2 && numero3 < numero)
    
    {
        minore = numero3; 
    }

    else if (numero2 > numero && numero2 < numero3)
    {
       med = numero2;
    }

    else if(numero3 > numero && numero3 < numero2)
    {
        med = numero3;
    }

    else
    {
        med = numero;
    }
    

    printf("Scegli se visualizzare i numeri in ordine crescente o decrescente. \n");
    printf("Qual'è la tua scelta? ");
    scanf(" %c", &scelta);

    if (scelta == 'c' || scelta == 'C')

    {
        printf("L'ordine scelto è il crescente: %d, %d, %d.", minore, med, maggiore);
    }

    else if (scelta == 'd' || scelta == 'D')

    {
        printf("L'ordine scelto è il decrescente: %d, %d, %d.", maggiore, med, minore);
    }
    else
    {
        printf("Valore inserito non valido.");
    }

    return 0;
}