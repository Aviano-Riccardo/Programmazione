voto_candidato_1 = int(input("Inserisci i voti presi dal candidato 1: "))
voto_candidato_2 = int(input("Inserisci i voti presi dal candidato 2: "))

voti_totali = voto_candidato_1 + voto_candidato_2

percentuale_candidato_1 = round((voto_candidato_1 / voti_totali) * 100, 1)
percentuale_candidato_2 = round((voto_candidato_2 / voti_totali) * 100, 1)

print("La percentuale di voti acquisita dal candidato numero 1 equivale a: ", percentuale_candidato_1, "%")
print("La percentuale di voti acquisita dal candidato numero 2 equivale a: ", percentuale_candidato_2, "%")