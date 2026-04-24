/* 6. Leggi un vettore di 12 interi. Chiedi all’utente un numero. Verifica se il numero è presente
nel vettore. Stampa quante volte compare.
*/

#include <stdio.h>
#define N 5

int main()
{
    int array[N];
    int cont = 0;

    for (int i = 0; i < N; i++)
    {
        printf("Inserisci il %d valore: ", i + 1);
        scanf("%d", &array[i]);

        if (N == array[i])
        {
            cont = cont + 1;
        }

        else 
        {

        }
    }

    printf("Il numero %d e' presente %d nel vettore.", N, cont);

    return 0;
}