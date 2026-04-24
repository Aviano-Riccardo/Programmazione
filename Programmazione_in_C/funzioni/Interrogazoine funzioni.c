/* Scrivi un programma che acquisisce il valore N e presenta un menu per scegliere una delle seguenti opzioni:
    1. Visualizza una riga di N asterischi
    2. Visualizza una colonna di N asterischi
    3. Visualizza una diagonale di N asterischi
    4. Visualizza un quadrato con il lato di N asterischi
    5. Visualizza un triangolo rettangolo con due cateti di N asteroschi NO

    0. Fine
*/

// Interrogazione sulle funzioni
// R.Aviano

#include <stdio.h>

#define N 5

void riga(int i, int j);
void colonna (int i, int j);
void diagonale(int i, int j);
void quadrato(int i, int j);
void triangoloRettangolo(int i, int j);

int  main()
{
    int matrice[N][N];

    printf("===MENU' DI SCELTA===\n");
    
    int s;
    scanf("%d", &s);

        printf("1. Visualizza una riga di N asterischi\n");
        printf("2. Visualizza una colonna di N asterischi\n");
        printf("3. Visualizza una diagonale di N asterischi\n");
        printf("4. Visualizza un quadrato con il lato di N asterischi\n");
        printf("5. Visualizza un triangolo rettangolo con due cateti di N asteroschi\n");
        printf("0. FINE\n");
    do
    {
        switch (s)
        {
        case 1:
            riga();
            break;
        case 2:
            colonna();
            break;
        case 3:
            diagonale();
            break;
        case 4:
            quadrato();
            break;
        case 5:
            triangoloRettangolo();
            break;
        case 0:
            printf("FINE");
            break;
        default:
            printf("Scelta non valida!");
            break;
        }
    } while (s != 0);

    return 0;
}

void riga(int i, int j)
{
    int matrice[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(matrice[i][j] == i)
            {
                matrice[i][j] = '*';
            }
        }
    }

    printf("%d", matrice[N][N]);
}

void colonna(int i, int j)
{
    int matrice[N][N];

    for (int i = 0; i < N; i++)
    {
       for (int j = 0; j < N; j++)
       {
            if(matrice[i][j] == j)
            {
                matrice[i][j] = '*';
            }
       }
    }

    printf("%d", matrice[N][N]);
}

void diagonale(int i, int j)
{
    int matrice[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i = j)
            {
                matrice[i][j] = '*';
            }
        }
    }

    printf("\t%d", matrice[N][N]);
}

void quadrato(int i, int j)
{
    int matrice[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matrice[i][j] = '*';
        }
    }

    printf("%d", matrice[N][N]);
}

void triangoloRettangolo(int i, int j)
{
    int matrice[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(matrice[i][j] == i)
            {
                matrice[i][j] = '*';
            }
        }
    }

    printf("%d", matrice[N][N]);
}