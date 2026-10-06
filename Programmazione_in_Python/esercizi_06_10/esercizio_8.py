def conta_maggiori(lista, soglia):
    conteggio = 0
    i = 0

    while i < len(lista):
        if lista[i] > soglia:
            conteggio = conteggio + 1

        i = i + 1

    return conteggio

def stampa_conteggio(soglia, conteggio):
    print("I numeri maggiori di {:d} sono: {:d}" .format(soglia, conteggio))

numeri = [5, 4, 20, 18, 3, 10]
