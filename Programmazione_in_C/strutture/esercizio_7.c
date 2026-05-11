#include <stdio.h>
#include <string.h>

#define S 3
#define E 7

typedef struct
{
    char mat[50];
    char nome[50];
    char cognome[50];
}Vettore_M;

typedef struct
{
    char mat[50];
    char esame[50];
    int voto;
}Vettore_V;

void inserisciStudenti(Vettore_M studente[])
{
    for (int i = 0; i < S; i++)
    {
        printf("\nMatricola: ");
        scanf("%s", studente[i].mat);

        printf("Nome: ");
        scanf("%s", studente[i].nome);

        printf("Cognome: ");
        scanf("%s", studente[i].cognome);
    }
}

void inserimentoEsami(Vettore_V esami[])
{
    for (int i = 0; i < E; i++)
    {
        
    }
}