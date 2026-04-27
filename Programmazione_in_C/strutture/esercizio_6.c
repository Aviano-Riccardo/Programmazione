/* Creare una struttura studente con nome, cognome, media, una volta creato se media minore di 6 bocciato
*/
#include <stdio.h>
#include <string.h>

#define N 5

typedef struct
{
    char nome[50];
    char cognome[50];
    float media;
}Studente;

void infoStudente(Studente s1[150])
{
    for(int i = 0; i < N; i++)
    {
        printf("\nInserisci il nome dello studente: ");
        scanf("%s", s1[i].nome);

        printf("Inserisci il cognome dello studente: ");
        scanf("%s", s1[i].cognome);

        printf("Inserisci la media dello studente: ");
        scanf("%f", &s1[i].media);

        while (s1[i].media < 2 || s1[i].media > 10)
        {
            printf("ERRORE!\n");

            printf("La media non puo' essere minore di 2 o maggiore di 10. Inserisci una media compresa tra 1 e 10: ");
            scanf("%f", &s1[i].media);
        }
    }
}

void Bocciato(Studente s1[150])
{
    for (int i = 0; i < N; i++)
    {
        if(s1[i].media < 6)
        {
            printf("\nNome: %s\n", s1[i].nome);
            printf("Cognome: %s\n", s1[i].cognome);
            printf("Media: %.2f\n", s1[i].media);
            printf("BOCCIATO\n");
        }
        else
        {
            printf("\nNome: %s\n", s1[i].nome);
            printf("Cognome: %s\n", s1[i].cognome);
            printf("Media: %.2f\n", s1[i].media);
            printf("PROMOSSO\n");
        }
    }
}

int main()
{
    printf("===INFORMAZIONI STUDENTI===\n");
    
    Studente s1[150];

    infoStudente(s1);

    printf("===BACHECA===\n");

    Bocciato(s1);

    return 0;
}