# Realizzare un programma Python che gestisca i voti di uno studente.
# Il programma deve chiedere il nome dello studente e successivamente permettere l’inserimento di 5 voti.
# Riccardo Aviano

def main():
    print("\n=== GESTIONE STUDENDI ===\n")

    try:
        nome = str(input("Inserisci il nome dello studente: "))

        for i in range(5):
            voto = float(input("Inserisci un voto: "))

            while voto < 1 or voto > 10:
                voto = float(input("Inserisci un voto: "))
                