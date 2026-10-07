# Esercizio 1 classroom
# Riccardo Aviano - 4 Info

def saluto(nome):
    messaggio = "Ciao " + nome
    return messaggio

def main():
    nome = str(input("Inserisci il tuo nome: "))
    print(saluto(nome))

main()