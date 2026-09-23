# Esercizio 1
# Scrivi un programma che accetti da tastiera dei numeri finché viene inserito il valore 0 e che li visualizzi man mano.
# Riccardo Aviano - 4 Info

n = float(input("Inserisci un numero MAGGIORE o MINORE di 0: "))

while n!=0:
    print("{:.2f}".format(n))
    n = float(input("Inserisci un numero MAGGIORE o MINORE di 0. Se vuoi stoppare il programma inserisci 0: "))

print("Fine del programma")