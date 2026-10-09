# Interrogazione Costanzo 2
# Riccardo Aviano - 4 Info
# Attraverso uso funzioni, try, except, ecc...
# Simula inserimento password da utente, se entro 3 tentativi true allora finisci 
# Dopo il terzo tentativo sbagliato chiudi programma

def main():
    passwd = "skR*1@50^SIoK[DQU"

    print("=== INSERISCI LA PASSWORD PER ACCEDERE AL PROGRAMMA ===\n")

    for i in range(3):
        tentativo = str(input("Inserisci la password: "))

        if tentativo == passwd:
            print("PASSWORD CORRETTA! Accesso permesso!")
            break
        else:
            print(f"PASSWORD ERRATA! Accesso negato! Tentativo {i + 1}/3" "\n")

main()