desc = str(input("Inserisci descrizione del prodotto: "))
qta = int(input("Inserisci la quantita' di vendite del prodotto: "))
prz = float(input("Inserisci il prezzo del prodotto al pezzo: "))
iva = int(input("Inserisci il valore dell'aliquota IVA (esempio: 22%): "))

prezzo_totale_no_iva = round((prz * qta), 2)
prezzo_totale = round((prezzo_totale_no_iva + (prezzo_totale_no_iva * iva / 100)), 2)

print(desc)
print("Prezzo totale compreso di iva: ", prezzo_totale)