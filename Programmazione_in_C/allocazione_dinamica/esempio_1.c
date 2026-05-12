#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quanti;

    printf("Quanti studenti vuoi inserire: ");
    scanf("%d", &quanti);

    int *voti = malloc(quanti * sizeof(int));

    if (voti == NULL)
    {
        printf("Memoria piena");
        return 1;
    }

    for (int i = 0; i < quanti; i++)
    {
        voti[i] = 10;
    }

    printf("Ho memorizzato %d voti con successo!", quanti);

    free(voti);

    return 0;
}