/* Esercizio 4 pag 270

Riccardo Aviano*/

#include <stdio.h>

#define N 5

void inserisciArray(int array[N]);
void inserisciNum(int array[N]);

int main()
{
    int array[N];
    inserisciArray(array);
    inserisciNum(array);

    return 0;
}

void inserisciArray(int array[N])
{
    printf("===RIEMPI L'ARRAY===\n");

    for (int i = 0; i < N; i++)
    {
        printf("Inserisci numero %d: ", i);
        scanf("%d", &array[i]);
    }
}

void inserisciNum(int array[N])
{
    int n;
    int trovato = 0;

    printf("inserisci un numero: ");
    scanf("%d", &n);

    for (int i = 0; i < N; i++)
    {
        if (n == array[i])
        {
            trovato = 1;
            printf("Il numero trovato si trova in posizione : %d", i);
        }
    }

    if (trovato == 0)
    {
        printf("Il numero inserito non è presente nell'array!");
    }
}