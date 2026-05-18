/* Riccardo Aviano
    15-05-26
    3 Info
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 7
#define U 3
#define I 11

typedef struct
{
    char azienda[50];
    int partita_iva[I];
}PartitaIva;

void inserisciDati (PartitaIva iva[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nNome azienda: ");
        scanf("%s", iva[i].azienda);
        
        for (int j = 0; j < M; j++)
        {
            do
            {
                printf("Matricola (posizione %d, inserire 1 cifra alla volta): ", j + 1);
                scanf("%d", &iva[i].partita_iva[j]);

                if (iva->partita_iva[j] < 0)
                {
                    printf("Errore! Non sei speciale, la tua matricola non può contenere numeri negativi. FAI ATTENZIONE! INSERISCI NUMERI MAGGIORI o UGUALI A 0!");
                }
        
            } while (iva[i].partita_iva[j] < 0);
        }

        for (int k = 0; k < U; k++)
        {
            do
            {
                printf("Codice ufficio (posizione %d, inserire 1 cifra alla volta): ", M + k + 1);
                scanf("%d", &iva[i].partita_iva[M + k]);

                if (iva[i].partita_iva[k] < 0)
                {
                    printf("Errore! Non sei speciale, il tuo codice ufficio non può contenere numeri negativi. FAI ATTENZIONE! INSERISCI NUMERI MAGGIORI o UGUALI A 0!");
                }
        
                } while (iva[i].partita_iva[M + k] < 0);
        }
        
    }
    
}

int calcoloControllo (PartitaIva iva[], int n)
{
    int x = 0; // Somma delle posizioni dispari
    int y = 0; // Somma del DOPPIO di ogni cifra in posizione pari, se >=10 sotrarre 9
    int z = 0; // Somma di cifre in posizione pari, una volta raddoppiate, >= 5
    int t = 0; // Somma totale (X + Y + Z) \ % 10
    int c;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((j + 1) % 2 == 0)
            {
                int doppio = iva[i].partita_iva[j] * 2;
                
                if(doppio >= 10)
                {
                    doppio = doppio - 9;
                }

                y = y + doppio;
            }

            else
            {
                x = x + iva[i].partita_iva[j];
            }

            t = (x + y + z) % 10;
            c = (10 - t) % 10;
        }
    }

    return c;
}

int verificaCifraControllo (PartitaIva iva[], int n)
{
    int x = 0; // Somma delle posizioni dispari
    int y = 0; // Somma del DOPPIO di ogni cifra in posizione pari, se >=10 sotrarre 9
    int z = 0; // Somma di cifre in posizione pari, una volta raddoppiate, >= 5
    int t = 0; // Somma totale (X + Y + Z) \ % 10
    int c;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((j + 1) % 2 == 0)
            {
                int doppio = iva[i].partita_iva[j] * 2;
                
                if(doppio >= 10)
                {
                    doppio = doppio - 9;
                }

                y = y + doppio;
            }

            else
            {
                x = x + iva[i].partita_iva[j];
            }

            t = (x + y + z) % 10;
            c = (10 - t) % 10;
        }

        if(c == iva[i].partita_iva[10])
        {
            printf("\nIl codice di controllo vale: %d", c);
        }

        else
        {
            printf("\nErrore! Il codice di controllo sembra esser speciale, anzi errato.");
        }
    }

    return c;
}

void stampaIva(PartitaIva iva[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < I; j++)
        {
            printf("\n%d", iva[i].partita_iva[j]);
        }
    }
}

void file(PartitaIva iva[], int n)
{
    FILE *fp = fopen("partitaIva.txt", "a");

    int variabileInt = verificaCifraControllo(iva, n);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < I; j++)
        {
            fprintf(fp, "%d", iva[i].partita_iva[j]);
        }
    }
    
    if (variabileInt == 1)
    {
        fprintf(fp, "\nIl codice di controllo e' corretto");
    }

    else
    {
        fprintf(fp, "\nIl codice di controllo e' ERRATO");
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
    verificaCifraControllo(iva, n);
    stampaIva(iva, n);

    // Salvo su file

    file(iva, n);

    return 0;
}