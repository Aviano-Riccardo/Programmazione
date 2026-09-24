# Esercizio 5
# Dato un elenco di studenti universitari (ad esempio il numero a 5), con nome e voto in un esame (da 18 a 30), calcola il valore medio dei voti.
# Riccardo Aviano - 4 Info

studenti = int(input("Inserisci il numero di studenti di cui vuoi avere la media dei voti: "))
voti = 0

for voto in range(studenti):
    nome = str(input("\tInserisci il nome dello studente: "))
    voto = int(input("\tInserisci il voto dello studente (da 18 a 30): "))

    voti = voti + voto

media = voti / studenti

print("\n === Risultati ===")
print("La media dei voti di {:d} studenti equivale a: {:.2f}" .format(studenti, media))