/* 4. Scrivi un programma che:
        Legge un vettore di 15 interi.
        Conta quanti sono pari e quanti dispari.
        Stampa il risultato.
*/

#include <stdio.h>
#define V 15

int main()
{
    int array[V];
    int contp = 0; 
    int contd = 0;

    for(int i = 0; i < V; i++)
    {
        printf("Inserisci il %d valore: ", i + 1);
        scanf("%d", &array[i]);

        if(array[i] %2 == 0)
        {
            contp = contp + 1;
        }

        else 
        {
            contd = contd + 1;
        }
    }

    printf("I numeri pari equivalgono a: %d\n", contp);
    printf("I numeri dispari equivalgono a: %d", contd);

    return 0;
}