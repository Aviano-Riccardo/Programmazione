#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int eta;
    float media;
}Studenti;

void inserisciStudenti(Studenti *s)
{  
    printf("\nNome: ");
    scanf("%s", s->nome);

    do
    {
        printf("Eta': ");
        scanf("%d", &s->eta);

        if (s->eta < 11 || s->eta > 19)
        {
            printf("Errore! Sei troppo piccolo/grande per le classi che legge il programma");
        }

    } while (s->eta < 11 || s->eta > 19); 

    do
    {
        printf("Media: ");
        scanf("%.2f", &s->media);

        if (s->media < 0 || s->media > 10)
        {
            printf("Errore! Non sei un plus-dodato...la tua medio non può essere superiore di 10. Non sei neanche così scarso da poter avere una media minore di 0");
        }
        
    } while (s->media < 0 || s->media > 10);
    
}

void stampaStudenti(Studenti *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n- Nome: %s\n - Eta': %d", s->nome, s->eta);
        printf("\n- Media: %.2f", s->media);
    }
    
}

int trovaMigliore(Studenti *s, int n)
{
    int migliore = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i].media > s[migliore].media)
        {
            migliore = i;
        }
    }
    
    return migliore;
}

int main()
{
    int n;
    
    do
    {
        printf("Inserisci il numero di studenti che vuoi inserire (0 se vuoi chiudere il programma): ");
        scanf("%d", &n);
    } while (n < 0);
    
    if (n == 0)
    {
        printf("Nessun studente da compilare!\n");
        return 1;
    }
    
    Studenti *s;
    
    s = (Studenti *) malloc(n * sizeof(Studenti));

    if (s == NULL)
    {
        printf("Errore allocazione memoria!\n");
        return 1;
    }

    printf("\n===INSERIMENTO STUDENTI===\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("\n----Studente %d----\n", i + 1);
        inserisciStudenti(&s[i]);
    }
    
    printf("\n===ELENCO STUDENTI===\n");
    stampaStudenti(s, n);

    printf("\n===MIGLIOR STUDENTE===\n");
    int migliore = trovaMigliore(s, n);
    
    printf("- Nome: %s\n - Eta': %d\n - Media: %.2f", s->nome, s->eta, s->media);

    free(s);
    
    return 0;
}