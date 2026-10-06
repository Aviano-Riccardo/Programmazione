def primo(numero):
    if numero < 2:
        return False

    for divisore in range(2, numero):
        if numero % divisore == 0:
            return False
    return True

def stampa(numero):
    if primo(numero):
        print(numero, "é un numero primo")
    else:
        print(numero, "Non è un numero primo")
