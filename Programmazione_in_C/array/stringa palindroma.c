#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len, is_palindrome = 1;
    printf("Insersci una stringa: ");
    scanf("%s", str);
    len = strlen(str); // restituisce vera lunghezza stringa

    // Confronto i caratteri della fine e dall'inizio
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome == 1)
    {
        printf("La stringa e' palindroma.");
    }
    
    else
    {
        printf("La stringa non e' palindroma.");
    }

    return 0;
}