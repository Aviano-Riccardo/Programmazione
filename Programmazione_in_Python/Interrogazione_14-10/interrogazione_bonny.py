# Interrogazione Bonni 14-10-26

def dipendenti():
    cont_stipendi = 0
    tot = 0
    
    try:
        while True:
            stipendio = int(input("Inserisci lo stipendio: "))

            if stipendio == -1:
                print("\n=== PROGRAMMA TERMINATO ===")
                break

            cont_stipendi += 1
            tot += stipendio

    except ValueError:
        print("= Errore! Devi inserire un numero ingtero!")

    except ZeroDivisionError:
        print("= Errore! Non si può fare la media degli stipendi se non si mettono stipendi")

    return tot, cont_stipendi

def media_stipendi (tot, cont_stipendi):
    media = 0
    media = tot / cont_stipendi

    return media

def main():
    print("=== PROGRAMMA AVVIATO ===\n")
    print("= Avviso!! Se vuoi uscire dal programma digita '-1'\n")
    
    tot, cont_stipendi = dipendenti()

    media = media_stipendi(tot, cont_stipendi)

    if cont_stipendi > 0:
        print("=== Riepilogo ===\n")
        print("Media: {:.2f}" .format(media))
        print("\n=== FINE DEL PROGRAMMA ===")
    else:
        print("= ATTENZIONE!! Non è stato inserito neanche uno stipendio!")


main()