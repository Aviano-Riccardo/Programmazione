/* Esercizio matrici 09-04-26

    Riccardo Aviano
*/

#include <stdio.h>

#define N 5

void diagionale();

int main()
{
    diagionale();

    return 0;
}

void diagionale()
{
    int  mat[N][N];

    for (int i = 0; i < N; i ++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                mat[i][j] = 1;
            }
            else
            {
                mat[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                printf("\t%d", mat[i][j]);
            }

            printf("\n");
        }
}