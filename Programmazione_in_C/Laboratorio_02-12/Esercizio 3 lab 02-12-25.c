/* 3. Conta le occorrenze
    Genera 50 numeri casuali da 0 a 9.
    Conteggia quante volte compare ciascuna cifra.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

int main()
{
    int valore;
    srand(time(NULL));
    int conteggio[10] = {0};

    for (int i = 0; i < N; i ++)
    {
        valore = rand() % 10;
        printf("%d \t", numeri[i]);
        conteggio[valore]++;
    }

    for (int i = 0; i < 10; i ++)
    {
        printf("il numero %d e' uscito %d volte", i, conteggio);
    }

    return 0;
}