# Interrogazione Costanzo 1
# Riccardo Aviano - 4 Info
# Scrivere un programma che richiede inserimento di un numero finchè non introduco lo 0
# Voglio sapere se positivo e divisori del numero inserito

def main():
    print("=== AVVIO DEL PROGRAMMA ===\n")
    print("== Inserisci numeri interi, se vuoi uscire dal programma digita '0' ==")

    divisibile = lambda x, y: x % y

    while True:
        try:
            numero = int(input("\nInserisci il numero: "))

            if numero > 0:
                for i in range(1, numero + 1):
                    if divisibile(numero, i) == 0:
                        print("Il numero è divisibile per: ", i)
            elif numero < 0:
                print("Il numero digitato è negativo!")
            else:
                print("=== Uscita dal programma ===\n")
                break
        except ValueError:
            print("ERRORE! Devi inserire un numero!")

main()