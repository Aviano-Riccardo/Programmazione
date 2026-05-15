#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 50

char cf[17];

void inserisci_cognome();
void inserisci_nome();
int inserisci_anno();
void inserisci_mese();
int inserisci_giornoSesso(int anno, char letteraMese);
void inserisci_comune();
void carattereControllo();

int main()
{
    inserisci_cognome();
    inserisci_nome();
    int risultato_anno = inserisci_anno();
    inserisci_mese();
    int risultato_giorno = inserisci_giornoSesso(risultato_anno, cf[8]);
    inserisci_comune();
    carattereControllo();

    sprintf(cf, "%c%c%c%c%c%c%02d%c%02d%c%c%c%c%c", cf[0], cf[1], cf[2], cf[3], cf[4], cf[5], risultato_anno, cf[8], risultato_giorno, cf[11], cf[12], cf[13], cf[14], cf[15]);

    printf("Il tuo codice fiscale completo vale: %s", cf);

    return 0;
}

void inserisci_cognome()
{
    char cognome[N];
    char c[N];
    char v[N];
    int cons = 0;
    int voc = 0;

    printf("===CODICE FISCALE MENU===\n");
    printf("Inserisci il tuo cognome: ");
    scanf("%s", cognome);

    for (int i = 0; cognome[i] != '\0'; i++)
    {
        cognome[i] = toupper(cognome[i]);

        if (cognome[i] != 'A' && cognome[i] != 'E' && cognome[i] != 'I' && cognome[i] != 'O' && cognome[i] != 'U')
        {
            c[cons] = cognome[i];
            cons = cons + 1;
        }
        else if (cognome[i] == 'A' || 'E' || 'I' || 'O' || 'U')
        {
            v[voc] = cognome[i];
            voc = voc + 1;
        }
    }

    if (cons >= 3)
    {
        cf[0] = c[0]; // Prima consonante
        cf[1] = c[1]; // Seconda consonante
        cf[2] = c[2]; // Terza consonante
    }
    else if (cons < 3)
    {
        cf[0] = c[0]; // Prima consonante
        cf[1] = c[1]; // Seconda consonante
        cf[2] = v[0]; // Prima vocale
    }
    else if (cons < 2)
    {
        cf[0] = c[0]; // Prima consonante
        cf[1] = v[0]; // Prima vocale
        cf[2] = v[1]; // Seconda vocale
    }
    else if (cons == 1 && voc == 1)
    {
        cf[0] = c[0]; // Prima consonante
        cf[1] = v[0]; // Prima vocale
        cf[2] = 'X';  // X
    }
}

void inserisci_nome()
{
    char nome[N];
    char c[N];
    char v[N];
    int cons = 0;
    int voc = 0;

    printf("Inserisci il tuo nome: ");
    scanf("%s", nome);

    for (int i = 0; nome[i] != '\0'; i++)
    {
        nome[i] = toupper(nome[i]);

        if (nome[i] != 'A' && nome[i] != 'E' && nome[i] != 'I' && nome[i] != 'O' && nome[i] != 'U')
        {
            c[cons] = nome[i];
            cons = cons + 1;
        }

        else if (nome[i] == 'A' || nome[i] == 'E' || nome[i] == 'I' || nome[i] == 'O' || nome[i] == 'U')
        {
            v[voc] = nome[i];
            voc = voc + 1;
        }
    }

    if (cons >= 4)
    {
        cf[3] = c[0]; // Prima consonante
        cf[4] = c[2]; // Terza consonante
        cf[5] = c[3]; // Quarta consonante
    }
    else if (cons == 3)
    {
        cf[3] = c[0]; // Prima consonante
        cf[4] = c[1]; // Seconda consonante
        cf[5] = c[2]; // Terza consonante
    }
    else if (cons == 2)
    {
        cf[3] = c[0]; // Prima consonante
        cf[4] = c[1]; // Seconda consonante
        cf[5] = v[0]; // Prima vocale
    }
    else if (cons == 1)
    {
        cf[3] = c[0]; // Prima consonante
        cf[4] = v[0]; // Prima vocale
        cf[5] = v[1]; // Seconda vocale
    }
    else if (cons == 1 && voc == 1)
    {
        cf[3] = c[0]; // Prima consonante
        cf[4] = v[0]; // Prima vocale
        cf[5] = 'X';  // X
    }
}

int inserisci_anno()
{
    int anno;

    printf("Inserisci il tuo anno di nascita: ");
    scanf("%d", &anno);

    while (anno < 1900 || anno >= 2027)
    {
        printf("Inserisci un anno MAGGIORE o UGUALE a 1900 o MINORE di 2027: ");
        scanf("%d", &anno);
    }

    if (anno < 2000)
    {
        anno = anno - 1900;
    }
    else
    {
        anno = anno - 2000;
    }

    return anno;
}

void inserisci_mese()
{
    int mese;
    char letteraMese;

    printf("Inserisci il tuo mese di nascita in numeri (es: Gennaio = 01): ");
    scanf("%d", &mese);

    switch (mese)
    {
    case 1:
        letteraMese = 'A';
        break;
    case 2:
        letteraMese = 'B';
        break;
    case 3:
        letteraMese = 'C';
        break;
    case 4:
        letteraMese = 'D';
        break;
    case 5:
        letteraMese = 'E';
        break;
    case 6:
        letteraMese = 'H';
        break;
    case 7:
        letteraMese = 'L';
        break;
    case 8:
        letteraMese = 'M';
        break;
    case 9:
        letteraMese = 'P';
        break;
    case 10:
        letteraMese = 'R';
        break;
    case 11:
        letteraMese = 'S';
        break;
    case 12:
        letteraMese = 'T';
        break;
    default:
        break;
    }

    cf[8] = letteraMese;
}

int inserisci_giornoSesso(int anno, char letteraMese)
{
    int giorno;
    int max_giorni;
    char sesso;

    if (letteraMese == 'B')
    {
        if (anno % 4 == 0 && anno != 0)
        {
            max_giorni = 29;
        }
        else
        {
            max_giorni = 28;
        }
    }
    else if (letteraMese == 'D' || letteraMese == 'H' || letteraMese == 'P' || letteraMese == 'S')
    {
        max_giorni = 30;
    }
    else
    {
        max_giorni = 31;
    }

    printf("Inserisci il tuo giorno di nascita: ");
    scanf("%d", &giorno);

    while (giorno < 1 || giorno > max_giorni)
    {
        printf("Errore! Per questo mese il giorno deve essere tra 1 e %d.\n", max_giorni);
        printf("Inserisci un giorno valido: ");
        scanf("%d", &giorno);
    }

    printf("Inserisci la lettere del tuo sesso (es: maschio = M): ");
    scanf(" %c", &sesso);
    sesso = toupper(sesso);

    if (sesso == 'F')
    {
        giorno = giorno + 40;
    }

    return giorno;
}

void inserisci_comune()
{
    char comune[N];
    char codice[N];
    char provincia[N];
    char tmpcomune[N];
    int trovato = 0;

    printf("Inserisci il tuo comune di nascita: ");
    scanf("%s", comune);

    for (int i = 0; comune[i] != '\0'; i++)
    {
        comune[i] = toupper(comune[i]);
    }

    FILE *f = fopen("../comuni.txt", "r");
    if (f == NULL)
    {
        printf("Errore! File comuni.txt non trovato.\n");
        return;
    }

    while (fscanf(f, " %[^,],%[^,],%s", codice, provincia, tmpcomune) != EOF) // %[^,] → legge fino alla virgola, %d → numero,  %s → stringa
    {
        // printf("codice %s", codice);
        // printf("provincia %s", provincia);
        // printf("tmp comune %s", tmpcomune);
        if (strcmp(comune, tmpcomune) == 0) // strcmp serve a controllare due stringhe carattere per carattere
        {
            cf[11] = codice[0];
            cf[12] = codice[1];
            cf[13] = codice[2];
            cf[14] = codice[3];
            trovato = 1;
            break;
        }
    }

    fclose(f);

    if (trovato == 0)
    {
        printf("Il codice di %s non risulta nel database!\n", comune);
    }
}

void carattereControllo()
{
    char caratteri_cf[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}; // Tutto ciò che può esserci nel CF
    int tab_disp[] = {1, 0, 5, 7, 9, 13, 15, 17, 19, 21, 1, 0, 5, 7, 9, 13, 15, 17, 19, 21, 2, 4, 18, 20, 11, 3, 6, 8, 12, 14, 16, 10, 22, 25, 24, 23};                                                         // Valori in caso di posizione dispari
    int tab_pari[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};                                                              // Valori in caso di posizione pari
    int somma = 0;

    for (int i = 0; i < 15; i++) // Scorro cf
    {
        for (int j = 0; j < 36; j++) // Scorro tab
        {
            if (caratteri_cf[j] == cf[i])
            {
                if ((i + 1) % 2 == 0)
                {
                    somma = somma + tab_pari[j];
                }
                else
                {
                    somma = somma + tab_disp[j];
                }

                break;
            }
        }
    }

    int risultato = (somma % 26) + 'A';

    cf[15] = risultato;
}