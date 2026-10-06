# Esercizio 1
# Riccardo Aviano - 4 Info

def somma(a, b):
    return a + b

def sottrazione(a, b):
    return a - b

def moltiplicazione(a, b):
    return a * b

def divisione(a, b):
    if b == 0:
        print("Errore, Impossibile dividere per 0")
    return a / b

def resto(a, b):
    if b == 0:
        print("Errore: Impossibile calcolare il resto con divisore zero")
    return a % b

def stampa_risultato(risultato):
    print("Il risultato è: ", risultato)

try:
    num1 = float(input("Inserisci il primo numero: "))
    num2 = float(input("Inserisci il secondo numero: "))
    operatore = input("Inserisci l'operatore (+, -, *, /, %): ")

    if operatore == '+':
        risultato = somma(num1, num2)
    elif operatore == '-':
        risultato = sottrazione(num1, num2)
    elif operatore == '*':
        risultato = moltiplicazione(num1, num2)
    elif operatore == '/':
        risultato = divisione(num1, num2)
    elif operatore == '%':
        risultato = resto(num1, num2)
    else:
        print("Errore, operatore non conosciuto")
        
    stampa_risultato(risultato)

except ValueError:
    print("Errore: Inserire valori numerici validi per i numeri.")