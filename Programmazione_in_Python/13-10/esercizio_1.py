num_veicoli_reg = 0
incasso_complessivo = 0
num_clienti_sconto = 0
max_importo = 0
cliente_top = ""

def main():
    print("\n=== Avvio Programma Parcheggio ===\n")
    
    try:
        numero_veicoli = int(input("Inserisci il numero di veicoli che vuoi registrare (da 1 a 30): "))

        while True:
            for i in range(numero_veicoli):
                nome = str(input(f"Inserisci il nome del proprietario {i+1}: "))
                eta = int(input(f"Inserisci l'età del proprietario {i+1}: "))
                if eta < 18:
                    print("Errore! Un minorenne non può essere in possesso di patente!")
                else:
                    continue
            
                ore = int(input(f"Inserisci le ore di permanenza (da 1 a 24) {i+1}: "))
                if ore < 1 or ore > 24:
                        print("Errore! E' obbligatorio sostare per almeno un ora. \nNon è consentito sostare per più di 24 ore")
                else:
                    continue
            
                tipo_veicolo = int(input(f"Scegli il tipo di veicolo: 1 = auto; 2 = moto {i+1}: "))
                if tipo_veicolo != 1 or tipo_veicolo != 2:
                        print("Errore! Scelta non valida! Scegli 1 = auto; 2 = moto.")
                elif tipo_veicolo == 1:
                     cont_macchine = cont_macchine + 1
                     tariffa_orario = 3.00
                elif tipo_veicolo == 2:
                     cont_moto = cont_moto + 1
                     tariffa_orario = 1.50
            
                abb = str(input("Sei in possesso di un abbonamento? S/N"))

                costo_iniziale = tariffa_orario * ore

                if abb == 'S' and ore >= 3:
                    sconto_1 = costo_iniziale * 0.2
                    num_clienti_sconto = num_clienti_sconto + 1

                else:
                    continue

                if eta >= 65 or ore > 8:
                    sconto_2 = costo_iniziale * 0.15
                    num_clienti_sconto = num_clienti_sconto + 1
                else:
                    continue

                sconto_applicato = min(sconto_1, sconto_2)
                costo_parziale = costo_iniziale - sconto_applicato

                if tipo_veicolo == 2 and ore < 2:
                    costo_parziale = costo_parziale - 0.5
                else:
                    continue

                costo_finale = max(0.0, costo_parziale)

                incasso_complessivo = incasso_complessivo + costo_finale

                if costo_finale > max_importo:
                    max_importo = costo_finale
                    cliente_top = nome
                
                importo_medio = incasso_complessivo / numero_veicoli

                
    except ValueError:
        print("Errore! Dove richiesto devi inserire dei numeri interi!")