# Esercizio 6
# Alla fine della giornata di elezioni per il ballottaggio tra due candidati, si acquisiscono i voti
# (numeri interi) ottenuti dai due candidati. Scrivi il programma che calcoli le percentuali
# ottenute da ciascun candidato e comunichi il nome del vincitore.
# Riccardo Aviano - 4 Info

voto_candidato_1 = int(input("Inserisci i voti presi dal candidato 1: "))
voto_candidato_2 = int(input("Inserisci i voti presi dal candidato 2: "))

voti_totali = voto_candidato_1 + voto_candidato_2

percentuale_candidato_1 = round((voto_candidato_1 / voti_totali) * 100, 1)
percentuale_candidato_2 = round((voto_candidato_2 / voti_totali) * 100, 1)

print("\n === Risultati ===")
if percentuale_candidato_1 > percentuale_candidato_2:
    print("Il candidato numero 1 vince il ballottaggio con: {:.1f}% di voti" .format(percentuale_candidato_1))
elif percentuale_candidato_1 == percentuale_candidato_2:
    print("Il ballottaggio è perfettamente in pareggio")
else:
    print("Il candidato numero 2 vince il ballottaggio con: {:.1f}% di voti" .format(percentuale_candidato_2))