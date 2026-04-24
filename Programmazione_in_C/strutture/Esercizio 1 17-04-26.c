#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char cognome[50];
    char nome[50];
    char num[11];
    char mail[50];
    char data[8];
} Rubrica;

int main()
{
    printf("\n===Rubrica===\n");

    int contatto;
    printf("\nInserisci quanti contatti vuoi inserire: ");
    scanf("%d", &contatto);

    printf("0. Cognome, Nome, Numero.\n");
    printf("1. Cognome, Nome, Numero, Email.\n");
    printf("2. Cognome, Nome, Numero, Email, Data di nascita.\n");
    
    int scelta;
    printf("\nScegli un opzione per inserire i tuoi contatti: ");
    scanf("%d", &scelta);

    Rubrica contatti[contatto];

    switch (scelta)
    {
    case 0:
        for (int i = 0; i < contatto; i++)
        {
            printf("\n---Contatto %d---\n", i+1);
            
            printf("Cognome: ");
            scanf("%s", contatti[i].cognome);

            printf("Nome: ");
            scanf("%s", contatti[i].nome);

            printf("Telefono: ");
            scanf("%s", contatti[i].num);
        }
        break;

    case 1:
        for (int i = 0; i < contatto; i++)
        {
            printf("\n---Contatto %d---\n", i+1);
            
            printf("Cognome: ");
            scanf("%s", contatti[i].cognome);

            printf("Nome: ");
            scanf("%s", contatti[i].nome);

            printf("Telefono: ");
            scanf("%s", contatti[i].num);

            printf("Email: ");
            scanf("%s", contatti[i].mail);
        }
        break;

    case 2:
        for (int i = 0; i < contatto; i++)
        {
            printf("\n---Contatto %d---\n", i+1);
            
            printf("Cognome: ");
            scanf("%s", contatti[i].cognome);

            printf("Nome: ");
            scanf("%s", contatti[i].nome);

            printf("Telefono: ");
            scanf("%s", contatti[i].num);

            printf("Email: ");
            scanf("%s", contatti[i].mail);

            printf("Data di nascita: ");
            scanf("%s", contatti[i].data);
        }
        break;

    default:
        break;
    }

    printf("\nVisualizzazione Rubrica:\n");

    for (char c = 'A'; c <= 'Z'; c++)
    {
        int trovato = 0;

        for (int i = 0; i < contatto; i++)
        {
            if(contatti[i].cognome[0] == c || contatti[i].cognome[0] == (c + 32))
            {
                if(!trovato)
                {
                    printf("\nSezione %c:\n", c);
                }
                
                printf("- %s %s ", contatti[i].cognome, contatti[i].nome);
                printf("- Telefono: %s", contatti[i].num);
                trovato = 1;
            }
        }
    }

    return 0;
}