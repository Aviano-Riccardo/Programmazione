#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main()
{
    srand(time(NULL));
    int numeri[N];
    int contp = 0;
    int contd = 0;

    for (int i = 0; i < N; i ++)
    {
        numeri[i] = rand() % 50 + 1;

        if (numeri[i] % 2 == 0)
        {
            contp = contp + 1;
        }

        else 
        {
            contd = contd + 1;
        }
    }

    printf("Ci sono %d pari e %d dispari.", contp, contd);

    return 0;
}