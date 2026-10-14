# Riccardo Aviano

def calcola_sconto(totale_prodotto, qta):
    sconto = 0
    prod_sconto = 0
    
    if totale_prodotto >= 100:
        sconto = totale_prodotto * 0.1
        prod_sconto += 1
    elif totale_prodotto > 200 or qta >= 10:
        sconto = totale_prodotto * 0.15
        prod_sconto += 1

    prezzo_scontato = totale_prodotto - sconto

    if prezzo_scontato > 300 and prod_sconto >= 1:
        print("\n\t== CLIENTE PREMIUM ==\n")
    else:
        print("\n\t== CLIENTE STANDARD ==\n")
    
    return prezzo_scontato

def main():
    cont = 0

    print("\t=== GESTIONE ORDINI NEGOZIO ===")

    numero_prodotti = int(input("\n\tInserisci il numero di prodotti che vuoi acquistare: "))

    if numero_prodotti == 0:
        print("\n\t === NESSUN ORDINE DA EFFETTUARE! CHIUSURA PROGRAMMA ===")
    elif numero_prodotti < 0:
        print("\t\n= ERRORE! Non puoi inserire un numero negativo!")
        while numero_prodotti < 0:
            numero_prodotti = int(input("Inserisci il numero di prodotti da acquistare: "))

    while True:
        for i in range(numero_prodotti):
            nome = str(input("\t- Nome del prodotto: "))
        
            try:
                prezzo_unitario = float(input("\t- Prezzo unitario: "))

                if prezzo_unitario <= 0:
                    print("\t= ERRORE! Il prezzo non può essere minore o uguale a 0")
                    print("\n\t=== FINE DEL PROGRAMMA ===")
                    break

                qta = int(input("\t- Qta: "))

                if qta <= 0:
                    print("\t= ERRORE! La quantità non può essere minore o uguale di 0")
                    print("\n\t=== FINE DEL PROGRAMMA ===")
                    break

                totale_prodotto = prezzo_unitario * qta

            except ValueError:
                print("\n\t= ERRORE! Inserisci un numero intero")

            prezzo_scontato = calcola_sconto(totale_prodotto, qta)

            cont = cont + prezzo_scontato

            prod_maggiore = 0

            if prod_maggiore < prezzo_scontato:
                prod_maggiore = prezzo_scontato
            else:
                continue

        print("\t- Totale complessivo: ", cont)
        print("\t- Prezzo più alto: ", prod_maggiore)
        break

main()