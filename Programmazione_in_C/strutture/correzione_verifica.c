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
        printf("Nome: ");
        scanf("%s", classe[i].nome);

        printf("\nCognome: ");
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
            printf("%d", classe[i].voti[j]);
        }
        
        printf("\t- Media: %.2f", classe[i].media);
    }
}

void trovaMigliore (Studente classe[], int n)
{
    for (int i = 0; i < n; i++)
    {
        
    }
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

    return 0;
}