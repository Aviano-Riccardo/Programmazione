#include <stdio.h>

#define S 5

struct Studente
{
    char cognome[50];
    char nome[50];
    float media;
};

int main()
{
    int indice_max = 0;

    printf("\n---Inserimento dati Studenti---\n");

    struct Studente studenti[10];

    // Inserimento dati
    for (int i = 0; i < S; i++)
    {
        printf("\nInserisci i dati dello studente %d\n", i + 1);

        printf("Cognome: ");
        scanf("%s", studenti[i].cognome);

        printf("Nome: ");
        scanf("%s", studenti[i].nome);

        do
        {
            printf("Inserisci la sua media (18-30): ");
            scanf("%f", &studenti[i].media);

            if (studenti[i].media < 18 || studenti[i].media > 30)
            {
                printf("Media non valida! Riprova\n");
            }
        } while (studenti[i].media < 18 || studenti[i].media > 30);
    }

    // Stampa dati
    printf("\n---Elenco Studenti---\n");

    for (int i = 0; i < S; i++)
    {
        printf("\nStudente %d\n", i + 1);
        printf("\tCognome: %s\t", studenti[i].cognome);
        printf("\tNome: %s\t", studenti[i].nome);
        printf("\tMedia: %.1f", studenti[i].media);
    }

    for (int i = 1; i < S; i++)
    {
        if (studenti[i].media > studenti[indice_max].media)
        {
            indice_max = i;
        }
    }

    printf("\n------Studente con media piu' alta------\n");
    printf("\n\tCognome: %s\t", studenti[indice_max].cognome);
    printf("\tNome: %s\t", studenti[indice_max].nome);
    printf("\tMedia: %.1f", studenti[indice_max].media);

    return 0;
}