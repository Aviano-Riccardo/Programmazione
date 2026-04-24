#include <stdio.h>

int main()
{
    int mat[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
          
                mat[i][j] = (i+1)*(j+1);
        }
    }

    printf("\nRisultato\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("\t%d", mat[i][j]);
        }

        printf("\n");
    }

    return 0;
}