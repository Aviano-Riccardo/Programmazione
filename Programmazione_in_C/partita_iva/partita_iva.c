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
                printf("Matricola (ricorda di inserire 1 cifra alla volta): ");
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
                printf("Codice ufficio (ricorda di inserire 1 cifra alla volta): ");
                scanf("%d", &iva[i].partita_iva[M + k]);

                if (iva[i].partita_iva[k] < 0)
                {
                    printf("Errore! Non sei speciale, il tuo codice ufficio non può contenere numeri negativi. FAI ATTENZIONE! INSERISCI NUMERI MAGGIORI o UGUALI A 0!");
                }
        
                } while (iva[i].partita_iva[k] < 0);
        }
        
    }
    
}

void calcoloControllo (PartitaIva iva[], int n)
{
    int x = 0; // Somma delle posizioni dispari
    int y = 0; // Somma del DOPPIO di ogni cifra in posizione pari, se >=10 sotrarre 9
    int z = 0; // Somma di cifre in posizione pari, una volta raddoppiate, >= 5
    int t = 0; // Somma totale (X + Y + Z) \ % 10
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

    return 0;
}