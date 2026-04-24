#include <stdio.h>

#define S 10

struct Studente
{
    char nome[50];
    int eta;
    float media;
};

int main()
{
    printf("\n---Inserimento dati Studenti---\n");

    struct Studente studenti[10];

    // Inserimento dati
    for (int i = 0; i < S; i++)
    {
        printf("\nInserisci i dati dello studente %d\n", i + 1);
        
        printf("Inserisci il nome dello studente: ");
        scanf("%s", studenti[i].nome);

        printf("Inserisci la sua eta': ");
        scanf("%d", &studenti[i].eta);

        printf("Inserisci la sua media: ");
        scanf("%f", &studenti[i].media);
    }

    // Stampa dati
    printf("\n---Elenco Studenti---\n");

    for (int i = 0; i < S; i++)
    {
        printf("\nStudente %d\n", i + 1);
        printf("\tNome: %s\t", studenti[i].nome);
        printf("\tEta': %d\t", studenti[i].eta);
        printf("\tMedia: %.1f", studenti[i].media);
    }

    return 0;
}