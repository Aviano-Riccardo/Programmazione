# Esercizio Laboratorio 1
# Riccardo Aviano

import math

def inserisci_coordinate(numero_punto):
    print("\nInserisci le cordinate del punto ", numero_punto)
    x = float(input("Ascissa (x): "))
    y = float(input("Ordinata (y): "))

    return (x,y)

def calcola_distanza(x1, y1, x2, y2):
    distanza = math.sqrt((x2 - x1)**2 + (y2 - y1)**2)
    return distanza

def stampa(distanza):
    print("La distanza calcolata vale: {:.2f}".format(distanza))

def main():
    print("=== Distanza tra punti ===")
    
    x1, y1 = inserisci_coordinate(1)
    x2, y2 = inserisci_coordinate(2)

    d = calcola_distanza(x1, y1, x2, y2)

    print("\n === Risultato ===")

    stampa(d)

main()