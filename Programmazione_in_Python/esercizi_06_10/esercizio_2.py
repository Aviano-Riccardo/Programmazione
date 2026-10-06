# Esercizio 2
# Riccardo Aviano - 4 Info

def pari(numero):
    return numero % 2 == 0

def stampa_esito(numero, pari):
    if pari:
        print("Il numero {:d} è PARI." .format(numero))
    else:
        print("Il numero {:d} è DISPARI." .format(numero))

numeri = [4, 11, 26, 33, 8, 15, 42]

for num in numeri:
    risultato = pari(num)    
    stampa_esito(num, risultato)