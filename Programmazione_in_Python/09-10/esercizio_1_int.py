# Realizzare un programma Python che gestisca i voti di uno studente.
# Il programma deve chiedere il nome dello studente e successivamente permettere l’inserimento di 5 voti.
# Riccardo Aviano

n = 5
def main():
    print("\n=== GESTIONE STUDENDI ===\n")

    cont_insufficienti = 0
    cont_sufficienti = 0
    cont = 0
    media = 0
    
    try:
        nome = str(input("Inserisci il nome dello studente: "))

        for i in range(n):
            voto = float(input(f"Inserisci un voto {i + 1}: "))

            while voto < 1 or voto > 10:
                voto = float(input(f"Inserisci un voto {i + 1}: "))

            cont += voto
            
            if voto < 6:
                cont_insufficienti += 1
            else:
                cont_sufficienti += 1

        media = cont / n

        print("\t=== RIEPILOGO ===")
        print("\t- Nome: ", nome)
        print("\n\t- Media: ", media)
        print("\n\t- Voti sufficienti: ", cont_sufficienti)
        print("\n\t- Voti insufficienti: ", cont_insufficienti)

        if media >= 6:
            print("\n\t== STUDENTE PROMOSSO==")
        else:
            print("\n== GIUDIZIO IN SOSPESO ==")
        print("\n=== PROGRAMMA TERMINATO ===")
    
    except ValueError:
        print("= Errore! Usa solo numeri interi!")

main()