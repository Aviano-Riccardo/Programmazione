#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int vocali = 0, consonanti = 0;

    printf("Inserisci una stringa: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = tolower(str[i]); // Converte caratteri maiuscoli in minuscoli
        if (c >= 'a' && c <= 'z')
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                vocali++;
            }

            else
            {
                consonanti++;
            }
        }
    }

    printf("La stringa contiene %d vocali e %d consonanti. ", vocali, consonanti);

    return 0;
}