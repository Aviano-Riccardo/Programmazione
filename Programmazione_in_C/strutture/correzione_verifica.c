#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_S 20
#define MAX_V 5

typedef struct
{
    char nome[50];
    char cognome[50];
    int voti[MAX_V];
    float media;
} Studente;

void inserisciStudenti(Studente classe[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nNome: ");
        scanf("%s", classe[i].nome);

        printf("Cognome: ");
        scanf("%s", classe[i].cognome);
    }
}

void generaVoti(Studente classe[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < MAX_V; j++)
        {
            classe[i].voti[j] = rand() % 10 + 1;
        }
    }
}

void calcolaMedie (Studente *s)
{
    float sommaVoti = 0;

    for (int i = 0; i < MAX_V; i++)
    {
        sommaVoti = sommaVoti + s->voti[i];
    }

    s->media = sommaVoti / MAX_V;
}

void stampaStudenti (Studente classe[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s %s\t", classe[i].nome, classe[i].cognome);
        printf("- Voti: ");
        for (int j = 0; j < MAX_V; j++)
        {
            printf(" %d", classe[i].voti[j]);
        }
        
        printf("\t- Media: %.2f\n", classe[i].media);
    }
}

int trovaMigliore (Studente classe[], int n)
{
    int migliore = 0;

    for (int i = 0; i < n; i++)
    {
        if (classe[i].media > classe[migliore].media)
        {
            migliore = i;
        }
    }

    return migliore;
}

void salvaSuFile (Studente classe[], int n)
{
    FILE *f = fopen ("studenti.txt", "w");
    if (f == NULL)
    {
        return;
    }

    fprintf (f, "===ELENCO STUDENTI===\n");
    
    for (int i = 0; i < n; i++)
    {
        fprintf (f, "%s %s\t", classe[i].nome, classe[i].cognome);
        
        for (int j = 0; j < MAX_V; j++)
        {
            fprintf (f, "- Voti: %d\t", classe[i].voti[j]);
        }

        fprintf (f, "- Media: %.2f\n", classe[i].media);
    }

    fclose(f);

    printf("Dati salvati correttamente sul file 'studenti.txt'.");
}

int main()
{
    srand(time(NULL));
    int n;

    do
    {
        printf("Inserisci numero studenti (MAX %d): ", MAX_S);
        scanf("%d", &n);
    } while (n < 1 || n > MAX_S);
    
    Studente classe[n];

    inserisciStudenti (classe, n);

    for (int i = 0; i < n; i++)
    {
        generaVoti(&classe[i], n);
        calcolaMedie(&classe[i]);
    }
    
    printf("\n===ELENCO STUDENTI===\n");
    printf("---ELENCO INIZIALE---\n");
    stampaStudenti(classe, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < MAX_V; j++)
        {
            if (classe[i].voti[j] < 6)
            {
                classe[i].voti[j] = 6;
            }
        }

        calcolaMedie(&classe[i]);
        
    }

    printf("\n---ELENCO FINALE---\n");
    stampaStudenti(classe, n);

    printf("\n===MIGLIOR STUDENTE===\n");
    
    int migliore = trovaMigliore(classe, n);

    printf("%s %s - Media: %.2f\n",classe[migliore].nome,classe[migliore].cognome,classe[migliore].media);

    salvaSuFile(classe, n);

    return 0;
}