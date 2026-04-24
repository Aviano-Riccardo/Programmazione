#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3
int main()
{
    int min = 0;
    int max = 1;

    srand(time(NULL));

    int numero;
    int mat[N][N];
    int cont_1 = 0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            numero = min + rand() % (max - min + 1);
            mat[i][j] = numero;
            if (numero == 1)
            {
                cont_1 = cont_1 + 1;
            }
        }
    }

    while(cont_1 < 5)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                    numero = min + rand() % (max - min + 1);
                    mat[i][j] = numero;
                    if (numero == 1)
                    {
                        cont_1 = cont_1 + 1;
                    }
            }
        }

    }

    int coordinate[N][N];
    int riga, colonna;
    int tentativi = 0;
    int manca = numero;
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Inserisci la coordinata di riga %d (vanno da 0 a 2): ", riga);
            scanf("%d", &riga);
              printf("Inserisci la coordinata di colonna %d (vanno da 0 a 2): ", colonna);
            scanf("%d", &colonna);

            tentativi = tentativi + 1;
            manca = manca - 1;
            if (coordinate[riga][colonna] == 1)
            {
                printf("La nave alla coordinata %d, %d e' stata colpita e affondata. Ti mancano %d navi e hai ancora %d tentaivi.", i, j, manca, tentativi);
            }
            else
            {
                printf("ACQUA! Riprova.");
            }
        }
    }
    return 0;
}