#include <stdio.h>
#define N 10

int main()
{
    char mat[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                mat[i][j] = '*';
            }
            else
            {
                mat[i][j] = '-';
            }
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%c", mat[i][j]);
        }

        printf("\n");
    }

    return 0;
}