# Esercizio 4
# Scrivi un programma che calcola la media degli stipendi dei dipendenti di un'azienda.
# L'acquisizione degli stipendi deve avvenire con una ripetizione fino a quando si inserisce il
# valore -1 per segnalare la fine dell'input dei dati.
# Nota: Devi usare un ciclo while. Ricordati di creare una variabile per tenere traccia della somma
# totale degli stipendi e una variabile contatore per sapere quanti dipendenti sono stati inseriti.
# Riccardo Aviano - 4 info

somma = 0
cont = 0

stipendio = int(input("Inserisci lo stipendio del dipendente (se vuoi interrompere l'acquisizione inserisci -1): "))
somma = somma + stipendio

while stipendio != -1:
    stipendio = int(input("Inserisci lo stipendio del dipendente (se vuoi interrompere l'acquisizione inserisci -1): "))
    somma = somma + stipendio
    cont = cont + 1

media = somma / cont

print("\n === Risultati ===")
print("Stipendi calcolati: {:d}" .format(cont))
print("La media delgi stipendi equivale a: {:.2f} €" .format(media))