#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_A 15
#define MAX_S 4

typedef struct
{
    char nome[50];
    char nazione[50];
    int salti[MAX_S];
    float media;
}Atleta;

void datiAtleti(Atleta performance[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nNome: ");
        scanf("%s", performance[i].nome);

        printf("Nazione: ");
        scanf("%s", performance[i].nazione);
    }
}

void generaSalti(Atleta performance[], int n)
{
    int min = 4;
    int max = 9;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < MAX_S; j++)
        {
            performance[i].salti[j] = min + rand() % max - min + 1;
        }
    }
}

void calcoloMedia(Atleta *p)
{
    float somma = 0;

    for (int i = 0; i < MAX_S; i++)
    {
        somma = somma + p->salti[i];
    }
    
    p->media = somma / MAX_S;
}

void stampaAtleti(Atleta performance[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n - Nome: %s\n", performance[i].nome);
        printf("- Nazione: %s\n", performance[i].nazione);
        for (int j = 0; j < MAX_S; j++)
        {
            printf("- Metri salto %d: %d\t", j + 1, performance[i].salti[j]);
        }
        
        printf("\n- Media: %.2f\n", performance[i].media);
    }
}

void verificaSalti(Atleta performance[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < MAX_S; j++)
        {
            if (performance[i].salti[j] < 5)
            {
                performance[i].salti[j] = 5;
            }
        } 
    }
}

int trovaMigliore(Atleta performance[], int n)
{
    int migliore = 0;

    for (int i = 0; i < n; i++)
    {
        if (performance[i].media > performance[migliore].media)
        {
            migliore = 1;
        }
    }

    return migliore;
}

int main()
{
    srand(time(NULL));
    
    int n;

    do
    {
        printf("Inserisci il numero di atleti di cuoi prendere le statistiche: ");
        scanf("%d", &n);
    } while (n < 1 || n > MAX_A);
    
    Atleta performance[n];

    datiAtleti(performance, n);

    printf("\n===ELENCO ATLETI===\n");
    for (int i = 0; i < n; i++)
    {
        generaSalti(&performance[i], n);
        calcoloMedia(&performance[i]);
    }
    
    printf("\n---ELENCO INIZIALE---\n");
    stampaAtleti(performance, n);

    // Verifica + modifica
    for (int i = 0; i < n; i++)
    {
        verificaSalti(&performance[i], n);
        calcoloMedia(&performance[i]);
    }
    
    printf("\n---ELENCO DOPO VERIFICA DEI SALTI---\n");
    stampaAtleti(performance, n);

    printf("\n===ATLETA MIGLIORE===\n");
    int migliore = trovaMigliore(performance, n);
    printf("\n - Nome: %s\n", performance[migliore].nome);
    printf("- Nazione: %s\n", performance[migliore].nazione);
    printf("- Media: %.2f", performance[migliore].media);

    return 0;
}