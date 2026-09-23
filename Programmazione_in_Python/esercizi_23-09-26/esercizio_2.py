# Esercizio 2
# Scrivi un programma in cui vengono dati in input la descrizione, la quantità, il prezzo unitario
# di un articolo venduto e l'aliquota IVA. Il programma deve comunicare in output la descrizione
# e il prezzo totale aumentato dell'IVA, visualizzando i dati in modo formattato.
# Riccardo Aviano - 4 Info

desc = str(input("Inserisci descrizione del prodotto: "))
qta = int(input("Inserisci la quantità di vendite del prodotto: "))
prz = float(input("Inserisci il prezzo del prodotto senza iva: "))
IVA = 22

prezzo_totale_no_iva = (prz * qta)
prezzo_totale = (prezzo_totale_no_iva + (prezzo_totale_no_iva * IVA / 100))

print("\n ==== Vendita ====")
print(desc)
print("Prezzo totale compreso di iva: {:.2f}" .format(prezzo_totale))