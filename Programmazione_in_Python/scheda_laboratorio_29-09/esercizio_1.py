# Esercizio 1
# Riccardo Aviano - 29-09

try:
    a = int(input("Inserisci il dividendo: "))
    b = int(input("Inserisci il divisore: "))

    quoziente = a / b

    print("\n === Risultato ===")
    print("Primo numero: ", a)
    print("Secondo numero: ", b)
    print(quoziente)
except ValueError:
    print("Errore! Il numero non è un intero")
    print("Primo numero: ", a)
    print("Secondo numero: ", b)
except ZeroDivisionError:
    print("Errore! Un qualsiasi numero non può essere diviso per 0")
    print("Primo numero: ", a)
    print("Secondo numero: ", b)