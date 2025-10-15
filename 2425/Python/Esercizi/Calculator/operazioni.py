# Funzioni Calcolatrice

def somma(lista_valori: list) -> int:
    ris=0
    for i in range(len(lista_valori)):
        ris = ris+lista_valori[i]    
    return ris


# Prodotto
def prodotto(lista_valori: list) -> int:
    ris=1
    for i in range(len(lista_valori)):
        ris = ris*lista_valori[i] 
        i+=1
    return ris


# Sottrazione
def sottrazione(lista_valori: list) -> int:
    ris=0
    primo_numero = lista_valori.pop(0)
    ris = primo_numero-somma(lista_valori)
    return ris


# Divisione
def divisione(lista_valori: list) -> float:
    res = lista_valori.pop(0)
    for i in range(len(lista_valori)):
        res = res/lista_valori[i]
    return res


# end funzioni