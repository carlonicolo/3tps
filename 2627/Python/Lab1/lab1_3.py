# ciclo while
counter = 0

# Esercizio 1
# stampa i numeri da 0 a 10 usando un ciclo while
print("")
print("---------") 
print("Esercizio 1")
while(counter < 11):
    print(counter)
    counter = counter + 1

print("---------")    
print("Esercizio 2")
# Esercizio 2
# stampa i numeri da 20 a 0
countdown = 20
while(countdown >= 0):
    print(countdown)
    countdown = countdown - 1
    

# Esercizio 3
# Stampa la tabellina del 2 fino al 10 ( 2 * 10 )
tabellina = 2
print("---------")    
print(f'Esercizio 3 - tabellina del {tabellina}')
counter_tabellina = 0
while(counter_tabellina <= 10):
    prodotto = tabellina * counter_tabellina
    print(f'{tabellina} * {counter_tabellina} = {prodotto}')
    counter_tabellina = counter_tabellina + 1
    

# Esercizio 4
# Stampa la tabellina che l'utente desidera visualizzare
print("---- Esercizio 4 stampa la tabellina scelta dall'utente -----")
tabellina = int(input("Che tabellina vuoi visualizzare? (inserisci un numero intero)"))    
print(f'Esercizio 4 - tabellina del {tabellina}')
counter_tabellina = 0
while(counter_tabellina <= 10):
    prodotto = tabellina * counter_tabellina
    print(f'{tabellina} * {counter_tabellina} = {prodotto}')
    counter_tabellina = counter_tabellina + 1
    

# Esercizio 5
# Stampa i primi 30 numeri pari
print("----- Esercizio 5 - stampa i primi 30 numeri pari ----")
contatore_numpari = 1
while(contatore_numpari <= 60):
    if(contatore_numpari % 2 == 0):
        print(contatore_numpari)
    contatore_numpari = contatore_numpari + 1
    

# Esercizio 5
# Stampa i primi 30 numeri dispari
print("----- Esercizio 6 - stampa i primi 30 numeri dispari ----")
contatore_numdispari = 1
while(contatore_numdispari <= 60):
    if(contatore_numdispari % 2 != 0):
        print(contatore_numdispari)
    contatore_numdispari = contatore_numdispari + 1

