# Esercizio 3
# Riccardo Aviano - 29-09

while True:
    try:
        numero_voti = int(input("Inserisci il numero di voti che vuoi analizzare: "))

        if numero_voti < 0:
            print("Il numero dei voti non può essere negativo!")
        else:
            break

    except ValueError:
        print("Errore: devi inserire un numero intero.")

if numero_voti == 0:
    print("ERRORE! Non è possibile calcolare la media perché non ci sono voti.")
else:
    somma = 0
    suff = 0
    ins = 0

    for i in range(numero_voti):
        while True:
            try:
                voto = float(input(f"Inserisci il voto {i + 1}: "))

                if voto < 1 or voto > 10:
                    print("Il voto deve essere compreso tra 1 e 10.")
                else:
                    break

            except ValueError:
                print("Errore: devi inserire un numero.")

        somma = somma + voto

        if voto >= 6:
            suff = suff + 1
        else:
            ins = ins + 1

    media = somma / numero_voti

    print("\n === Risultato ===")
    print("Media: {:.2f}" .format(media))
    print("Voti sufficienti:", suff)
    print("Voti insufficienti:", ins)