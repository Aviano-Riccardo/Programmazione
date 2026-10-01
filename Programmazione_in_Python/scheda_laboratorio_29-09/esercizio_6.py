# Esercizio 6
# Riccardo Aviano - 29-09

successi = 0
errori_value = 0
errori_zero = 0

for i in range(5):
    print(f"Tentativo {i + 1} di 5")
    try:
        dividendo = float(input("Inserisci il dividendo: "))
        divisore = float(input("Inserisci il divisore: "))
        
        risultato = dividendo / divisore
        successi = successi + 1
        print("Risultato: {:.1f} / {:.1f} = {:.1f}\n".format(dividendo, divisore, risultato))
        
    except ValueError:
        errori_value = errori_value + 1
        print("Errore: inserisci valori numerici validi.")
        
    except ZeroDivisionError:
        errori_zero = errori_zero + 1
        print("Errore: impossibile dividere per zero.")

print("\n === Riepigolo finale ===")
print("Operazioni riuscite: {:d}".format(successi))
print("Errori ValueError (non numerico): {:d}".format(errori_value))
print("Errori ZeroDivisionError (divisione per zero): {:d}".format(errori_zero))