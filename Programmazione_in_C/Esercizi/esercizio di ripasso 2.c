#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100];
    int vocali = 0;

    printf("Inserisci una stringa: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = tolower(str[i]);
        
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                vocali = vocali + 1;
            } 
    }

    printf("La stringa contiene %d vocali. ", vocali);

    return 0;
}