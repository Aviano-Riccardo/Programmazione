#include <stdio.h>

void bisestile(int anno); //prototipo
int main()
{
    int anno, bis;

    printf("Inserisci un anno: ");
    scanf("%d", &anno);

    bisestile(anno);

    return 0;
}

void bisestile(int anno)
{
    
        if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0))
        {
            printf("L'anno %d e' bisestile!", anno);
        }
        else
        {
            printf("L'anno %d non e' bisestile!", anno);
        }
}