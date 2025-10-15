# Cicli for e liste 

# conta fino a 10 con incremento di 1
for x in range(1,10):
    print(x)

print("")

# tabellina del 2
for x in range(2,12,2):
    print(x)

print("")

# conto alla rovescia
for x in range(10, -1, -1):
    print(x)
    
print("")

lst_int = [1,2,10,4,5]
print(lst_int[2])

# come aggiungere un elemento alla lista
lst_int.append(4) 
print(lst_int)

lst_dati_utente = []

nome = input("Come ti chiami? ")
lst_dati_utente.append(nome)

cognome = input("Qual'è il tuo cognome? ")
lst_dati_utente.append(cognome)

citta = input("Qual'è la tua città ")
lst_dati_utente.append(citta)

for x in lst_dati_utente:
    print(x)

print("")
print(f'Nome: {lst_dati_utente[0]}')
print(f'Cognome: {lst_dati_utente[1]}')
print(f'Città: {lst_dati_utente[2]}')