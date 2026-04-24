/* es 8 pag 254 - Scrivi un programma che, partendo dalla stringa “oggi piove”, 
stampi la stringa in maiuscolo, aggiunga alla stringa la frase “domani sarà bel tempo” e stampi la nuova frase, 
restituisca in output la lunghezza della stringa e, infine, 
trasformi tutte le vocali in ‘i’, visualizzando il risultato.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>// per toupper e tolower 
int main()
{
    char frase[100] = "oggi piove"; // creo l'array iniziale
    //converto in maiuscolo
    for(int i = 0; i < strlen(frase); i++) 
    {
        frase[i] = toupper(frase[i]); // leggi g trasforma in G e carica nell'array frase
    }
    printf("la frase in maiuscolo e' %s\n", frase); // %s tutto l'array, %c carattere per carattere

    strcat(frase," domani sara' bel tempo"); // strcat per aggiungere una frase
    for(int i = 0; i < strlen(frase); i++) 
    {
        frase[i] = toupper(frase[i]); // leggi g trasforma in G e carica nell'array frase
    }
    printf("la frase concatenata e' %s\n", frase);
    int l = strlen(frase); // lunghezza frase
    printf("la lunghezza della nuova frase e' di %d caratteri\n", l);
    //trasfroma le vocali in i
    for(int i = 0; i < l; i++) 
    {
    char c = frase[i];
    if (c =='a'|| c == 'A' || c == 'e' || c == 'E' || c =='i' || c =='I' || c == 'o' || c == 'u' || c == 'U')
        {
             frase[i] = 'i'; // carattere singoli apicetti
        }
    }
    printf("la nuova frase sara' %s", frase);
    
    return 0;
}