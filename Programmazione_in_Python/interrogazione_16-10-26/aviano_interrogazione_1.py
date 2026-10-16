# Riccardo Avano - 4 Info 
# Interrogazione 16/10/26
# Esercizio 1

TARIFFA = 12

def calcola_bmi(peso, altezza):
    bmi = peso / (altezza ** 2)

    return bmi

def calcola_costo(ore): 
    costo = TARIFFA * ore

    if ore >= 5:
        sconto = costo * (20/100)

    costo = costo - sconto

    return costo
def main():
    print("\n=== GESTIONE PALESTRA ===\n")

    numero_clienti = int(input("Inserisci il numero di clienti da gestire: "))

    while numero_clienti < 0:
        print("= ERRORE! Devi inserire almeno un cliente! Il programma non può gestire clienti se non ci sono!")
        numero_clienti = int(input("Inserisci il numero di clienti da gestire: "))

    try:
        for i in range(numero_clienti):
            nome = str(input("\t- Nome: "))
            peso = float(input("\t- Peso: "))
            altezza = float(input("\t- Altezza: "))
            ore = int(input("\t- Ore di allenamento: "))
            bmi = calcola_bmi(peso, altezza)
            costo = calcola_costo(ore)

            print("\t- BMI: {:.2f}" .format(bmi))
            print("\t- Costo: ", costo)

            if bmi < 18.5 or bmi > 35:
                print("= ATTENZIONE! Il BMI non soddisfa la richiesta min/max della palestra quindi il cliente NON può allenarsi")
            else:
                print("= CLIENTE IDONEO! Benvenuto ", nome)
            
    except ValueError:
        print("= ERRORE! Devi usare dei numeri interi!")
    

main()