# Esercizio 4
# Riccardo Aviano - 29-09

while True:
    try:
        prezzo_totale = float(input("Inserisci il totale: "))
        numero_pezzi = int(input("Inserisci quanti pezzi sono stati venduti: "))

        if prezzo_totale < 0:
            print("Il prezzo totale non può essere negativo")
        elif numero_pezzi < 0:
            print("Il numero dei pezzi non può essere negativo")
        else:
            break

    except ValueError:
        print("Errore: devi inserire un numero intero.")

if prezzo_totale == 0:
    print("NESSUN ARTICOLO È STATO VENDUTO!")
else:
    try:
        prezzo_unitario = prezzo_totale / numero_pezzi

    except ZeroDivisionError:
        print("Nessun articolo è stato venduto")

    print("\n === Risultato ===")        
    print("Prezzo totale: {:.2f}" .format(prezzo_totale))
    print("Numero pezzi:", numero_pezzi)
    print("Prezzo unitario: {:.2f}" .format(prezzo_unitario))