/*  Riccardo Aviano
    15-05-26
    3 Info
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define I 11

typedef struct
{
    char azienda[50];
    char partita_iva[I + 1];
}PartitaIva;

void inserisciDati (PartitaIva iva[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nNome azienda: ");
        scanf("%s", iva[i].azienda);
        
        do
        {
            printf("Inserisci la tua partita IVA (inserisci massimo 11 cifre, ricorda che una parita IVA non contiene piu' di 11 cifre): ");
            scanf("%s", iva[i].partita_iva);

            for (int j = 0; j < I; j++)
            {
                if (iva[i].partita_iva[j] < '0' || iva[i].partita_iva[j] > '9')
                {
                    printf("ERRORE! La tua partita IVA non e' speciale, non puo' contenere lettere!");
                }
                
            }    

        } while (strlen(iva[i].partita_iva) != I);
        
        
    }
    
}

int calcoloControllo (PartitaIva iva[], int n)
{
    int c = 0;

    for (int i = 0; i < n; i++)
    {

        int x = 0; // Somma delle posizioni dispari
        int y = 0; // Somma del DOPPIO di ogni cifra in posizione pari, se >=10 sotrarre 9
        int z = 0; // Somma di cifre in posizione pari, una volta raddoppiate, >= 5
        int t = 0; // Somma totale (X + Y + Z) \ % 10

        for (int j = 0; j < 10; j++)
        {
            int  cifra = iva[i].partita_iva[j] - '0'; // Per ottenere il valore intero della cifra
            
            if ((j + 1) % 2 == 0)
            {
                int doppio = cifra * 2;
                
                if(doppio >= 10)
                {
                    doppio = doppio - 9;
                }

                y = y + doppio;
            }

            else
            {
                x = x + cifra;
            }
        }

        t = (x + y + z) % 10;
        c = (10 - t) % 10;
    }

    return c;
}

int verificaCifraControllo (PartitaIva iva[], int n)
{
    int c = 0;
    int corretto = 0;

    for (int i = 0; i < n; i++)
    {

        int x = 0; // Somma delle posizioni dispari
        int y = 0; // Somma del DOPPIO di ogni cifra in posizione pari, se >=10 sotrarre 9
        int z = 0; // Somma di cifre in posizione pari, una volta raddoppiate, >= 5
        int t = 0; // Somma totale (X + Y + Z) \ % 10

        for (int j = 0; j < 10; j++)
        {
            int  cifra = iva[i].partita_iva[j] - '0'; // Per ottenere il valore intero della cifra
            
            if ((j + 1) % 2 == 0)
            {
                int doppio = cifra * 2;
                
                if(doppio >= 10)
                {
                    doppio = doppio - 9;
                }

                y = y + doppio;
            }

            else
            {
                x = x + cifra;
            }
        }

        t = (x + y + z) % 10;
        c = (10 - t) % 10;

        int cifraControlloInserita = iva[i].partita_iva[10] - '0';

        if (c == cifraControlloInserita)
        {
            printf("\nL'undicesima cifra inserita corrisponde al codice di controllo calcolato: %d. \nCIFRA CORRETTA!", c);
            corretto = 1;
        }
        else
        {
            printf("\nERRORE! La cifra di controllo inserita sembra non corrispondere alla cifra calcolata dal programma: %d. \nCIFRA ERRATA", c);
            corretto = 0;
        }

    }

    return corretto;
}

void stampaIva(PartitaIva iva[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n- Azienda: %s \t- Partita IVA: %s", iva[i].azienda, iva[i].partita_iva);
    }
}

void file(PartitaIva iva[], int n)
{
    FILE *fp = fopen("partitaIva.txt", "a");

    if (fp == NULL)
    {
        printf("ERRORE! Questo file non esiste");
        return;
    }

    int variabileInt = verificaCifraControllo(iva, n);
    
    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "- Azienda: %s \t- Partita IVA: %s", iva[i].azienda, iva[i].partita_iva);

        if (variabileInt == 1)
        {
            fprintf(fp, "\nIl codice di controllo e' corretto");
        }

        else
        {
            fprintf(fp, "\nIl codice di controllo e' ERRATO");
        }
    }

    fclose(fp);
}

int main()
{
    int n;

    printf("Inserisci quante partite iva vuoi controllare: ");
    scanf("%d", &n);
    
    PartitaIva iva[n];

    printf("\n===AGENZIA DELL'ENTRATE===\n");
    printf("\n---VERIFICA LA TUA PARTITA IVA---\n");

    inserisciDati(iva, n);
    calcoloControllo(iva, n);
    /*verificaCifraControllo(iva, n);*/
    stampaIva(iva, n);

    // Salvo su file

    file(iva, n);

    return 0;
}