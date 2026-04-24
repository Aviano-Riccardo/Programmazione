#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char frase[100] = "oggi piove";

    for (int i = 0; i < strlen(frase); i++)
    {
        frase[i] = toupper(frase[i]); // Leggi c trasforma in C e carica in array frase
    }

    printf("La frase in maiuscolo e' %s\n", frase);

    strcat(frase, " domani sara' bel tempo");
        for (int i = 0; i < strlen(frase); i++)
    {
        frase[i] = toupper(frase[i]); // Leggi c trasforma in C e carica in array frase
    }

    printf("La frase concatenata e' %s\n", frase);

    int l = strlen(frase);
    printf("La lunghezza della nuova stringa vale: %d caratteri \n", l);

    for (int i = 0; i < l; i++)
    {
        char c = frase[i];
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
        {
            frase[i] = 'i';
        }
    }

    printf("La nuova frase sara': %s\n", frase);

    return 0;
}