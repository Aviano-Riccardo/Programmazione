# Esercizio 2
# Riccardo Aviano - 29-09

while True:
    operazione = input("Scegli che operazione vuoi svolgere (1. Addizione, 2. Sottrazione, 3. Moltiplicazione, 4. Divisione) oppure premi 'C' per uscire: ")

    if operazione == 'C':
        print("Programma terminato!")
        break
    else:
        try:
            a = float(input("Inserisci il primo numero: "))
            b = float(input("Inserisci il secondo numero: "))
        
            match operazione: 
                case "1":
                    risultato = a + b 
                    print("La somma dei due numeri vale: {:.2f}" .format(risultato))
                    break
                case "2":
                    risultato = a - b
                    print("La differenza dei due numeri vale: {:.2f}" .format(risultato))
                    break
                case "3":
                    risultato = a * b
                    print("Il prodotto dei due numeri vale: {:.2f}" .format(risultato))
                    break
                case "4":
                    risultato = a / b
                    print("il quoziente dei due numeri vale: {:.2f}" .format(risultato))
                    break
        except ValueError:
                print("Errore! Devi inserire dei numeri.")
        except ZeroDivisionError:
                print("Non si può dividere nessun numero per 0")