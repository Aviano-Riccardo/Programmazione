import math

c = float(input("Inserisci la circonferenza del cerchio: "))
r = c / (2 * math.pi)
a = round((math.pi * (r**2)), 2)
print("L'area del cerchio vale: ", a)