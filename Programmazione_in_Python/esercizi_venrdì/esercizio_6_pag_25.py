import math

r = float(input("Inserisci il raggio: "))
h = float(input("Inserisci l'altezza del cilindro: "))
a = math.pi * (r**2)
v = round ((a * h), 2) # ROUND è la funzione che arrotonda alla n cifra (scegli te quanto)
print("Il volume del cilindro vale: ", v)