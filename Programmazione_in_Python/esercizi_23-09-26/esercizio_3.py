# Esercizio 3
# Crea un programma che chieda all'utente due numeri (con la virgola) a e b. Il programma deve
# calcolare e scrivere la differenza dei due numeri se il loro prodotto è maggiore di 10, oppure la
# loro somma se il prodotto è minore o uguale a 10.
# Testa il programma con i seguenti valori per verificare se hai fatto giusto:
# * coppia di valori per a e b: (5, 2).
# * coppia di valori per a e b: (5, -5).
# * coppia di valori per a e b: (10, 2).
# Riccardo Aviano - 4 Info

a = int(input("inserisci un numero nella variabile a: "))
b = int(input("inserisci un numero nella variabile b: "))

prod = a * b

if prod > 10:
    diff = a - b
    print("\n === Risultati ===")
    print("* Coppia di valori per a e b: ({:d}, {:d})" .format(a, b))
    print("Risultato = {:d}" .format(diff))
else:
    somm = a + b 
    print("\n === Risultati ===")
    print("* Coppia di valori per a e b: ({:d}, {:d})" .format(a, b))
    print("\tRisultato = {:d}" .format(somm))