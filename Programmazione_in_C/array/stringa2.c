#include <stdio.h>
#include <string.h>

int main()
{
    // Copiare
    
    char dest[20];
    strcpy(dest, "Ciao!");
    printf("%s\n", dest);

    // Lunghezza

    // Confronto

    char str1[] = "ABC";
    char str2[] = "ABD";
    if (strcmp(str1, str2) == 0)
    {
        printf("Uguali\n");
    }

    else
    {
        printf("Diverso\n");
    }

    return 0;
}