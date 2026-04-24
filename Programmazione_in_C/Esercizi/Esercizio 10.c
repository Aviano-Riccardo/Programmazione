#include <stdio.h>

//const int MAX_TENTATIVI = 5; 

#define MAX_TENTATIVI 5
#define SOGLIA 100 //soglia per il confronto

int main()
{
    int num;
    int somma = 0; 
    int contatore = 0;
    while (contatore < MAX_TENTATIVI)
    {
        printf("Inserisci un numero positivo (negativo per finire): ");
        scanf("%d", &num);

        if (num < 0)
        {break;} // Se è negativo il ciclo si ferma

        somma = somma + num;
        contatore = contatore + 1;
    }
    
    printf("\n Hai inserito %d numeri: ", contatore);

    if (somma > SOGLIA)
    {
        printf("La somma supera %d. \n", SOGLIA);
    }

    else 
    {
        printf("La somma non supera %d. \n", SOGLIA);
    }

    printf("Fine del programma");
    return 0;
}