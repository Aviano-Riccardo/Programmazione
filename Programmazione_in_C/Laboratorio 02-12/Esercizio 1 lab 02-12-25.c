/* Genera un array di N numeri casuali compresi tra 1 e 100 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    srand(time(NULL));

    printf("Quanti numeri casuali vuoi visualizzare? ");
    scanf("%d", &num);

    while (num == 0)
    {
        printf("Inserisci un numero maggiore di 0! ");
        scanf("%d", &num);
    }
    int array[num];

    for (int i = 0; i < num; i ++)
    {
        array[i] = rand() % 100 + 1;
        printf("%d \t", array[i]);
    }

    return 0;
}