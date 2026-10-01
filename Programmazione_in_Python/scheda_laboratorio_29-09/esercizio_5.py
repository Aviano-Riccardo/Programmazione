# Esercizio 5
# Riccardo Aviano - 29-09

while True:
    esc = input("\nDigita 'q' in qualsiasi momento se vuoi chiudere il programma: \n")
    
    if esc == 'q':
        print("Programma terminato.")
        break
    else:
        try:
            valore = float(input("Inserisci la temperatura: "))
        except ValueError:
            print("Errore: la temperatura inserita non è numerica.")
        
        unita = input("Inserisci l'unità di misura (C o F): ")
        
        print("\n === Risultati ===")
        
        if unita == "C":
            risultato = (valore * 9 / 5) + 32
            print("Risultato: {:.1f}°C = {:.1f}°F".format(valore, risultato))
        elif unita == "F":
            risultato = (valore - 32) * 5 / 9
            print("Risultato: {:.1f}°F = {:.1f}°C\n".format(valore, risultato))
        else:
            print("Errore: unità non valida. Inserisci C oppure F.\n")