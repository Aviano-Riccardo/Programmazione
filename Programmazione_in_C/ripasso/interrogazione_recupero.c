/*  Riccardo Aviano
    3 INFO
    21-05-26    
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_P 100

typedef struct
{
    int codice;
    char nome[30];
    int quantita;
    float prezzo;
}Magazzino;

void inserisciProdotti (Magazzino mag[], int n)
{
    do
    {
        for (int i = 0; i < n; i++)
        {
            printf("\n- Codice del prodotto: ");
            scanf("%d", &mag[i].codice);

            printf("- Nome del prodotto: ");
            scanf("%s", mag[i].nome);

            printf("- Quantita' acquistata dal cliente: ");
            scanf("%d", &mag[i].quantita);

            do
            {
                printf("- Prezzo prodotto: ");
                scanf("%f", &mag[i].prezzo);

            } while (mag[i].prezzo < 0);
            
        }
        
    } while (n < 0 || n > MAX_P);
    
}

void stampaProdotti (Magazzino mag[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n- Codice: %d\t -Nome: %s\t - Quantita' acquistata: %d\t - Prezzo: %.2f", mag[i].codice, mag[i].nome, mag[i].quantita, mag[i].prezzo);
    }
    
}

int piuCostoso (Magazzino mag[], int n)
{
    int piu_costoso = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (mag[i].prezzo > mag[piu_costoso].prezzo)
        {
            piu_costoso = 1;
        }
        
    }

    return piu_costoso;
}

void cercaProdotto (Magazzino mag[], int n)
{
    int prod;
    printf("\nInserisci il codice del prodotto da cercare: ");
    scanf("%d", &prod);
    
    for (int i = 0; i < n; i++)
    {
        if (prod == mag[i].codice)
        {
            printf("\nIl codice: %d corrisponde al prodotto: ", prod);
            printf("\n- Codice: %d\t -Nome: %s\t - Quantita' acquistata: %d\t - Prezzo: %.2f", mag[i].codice, mag[i].nome, mag[i].quantita, mag[i].prezzo);
            break;
        }
        
    }
    
}

/*void ordinaPerPrezzo (Magazzino mag[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (mag[i].prezzo )
        {

        }
        
    }
    
}*/

float valoreTotale (Magazzino mag[], int n)
{
    float somma = 0;
    
    for (int i = 0; i < n; i++)
    {
        somma = somma + (mag[i].quantita * mag[i].prezzo);
    }

    return somma;
}

void salvaSuFile (Magazzino mag[], int n)
{
    FILE *fp = fopen("magazzino.txt", "w");

    if (fp == NULL)
    {
        printf("ERRORE! Non sei speciale, non puoi salvare i dati sul file se NON esiste il file!!!");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("\n- Codice: %d\t -Nome: %s\t - Quantita' acquistata: %d\t - Prezzo: %.2f", mag[i].codice, mag[i].nome, mag[i].quantita, mag[i].prezzo);
        }

        printf("\nDati salvati su file");
    }
    
    fclose(fp);
}

int main()
{
    int n; 

    do
    {
        printf("Inserisci quanti prodotti vuoi prendere i dati dal magazzino (non piu' di 100): ");
        scanf("%d", &n);
    } while (n < 0 || n > MAX_P);

    Magazzino mag[MAX_P];
    
    printf("===GESTIONE MAGAZZINO===");

    inserisciProdotti(mag, n);
    stampaProdotti(mag, n);
    int costoso = piuCostoso(mag, n);
    printf("\n===PRODOTTO PIU' COSTOSO===\n");
    printf("- Codice: %d\t -Nome: %s\t - Quantita' acquistata: %d\t - Prezzo: %.2f", mag[costoso].codice, mag[costoso].nome, mag[costoso].quantita, mag[costoso].prezzo);

    cercaProdotto(mag, n);

    float somma = valoreTotale(mag, n);
    printf("\n");
    printf("\nIl valore totale del magazzino equivale a: %.2f", somma);

    salvaSuFile(mag, n);

    return 0;
}