#include <stdio.h>
int main()

{
    int num, i, fatt = 1;

    while (num != 0)
    {
        printf("Inserisci un numero positivo \n");
        scanf("%d", &num);

        if (num > 0)
        {
            for(i = 1; i <= num; i++)
            {
                fatt = fatt *i;
            }

            printf("Il fattoriale di %d vale: %d \n", num, fatt);
            fatt = 1;
        }
         else 
         {
            printf("Valore non valido \n");
         }
    }

    return 0;

}