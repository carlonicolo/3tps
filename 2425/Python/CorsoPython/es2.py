num1 = int(input("Inserisci il primo numero: "))
num2 = int(input("Inserisci il secondo numero: "))

somma = num1 + num2
print(f'La somma di {num1} + {num2} è: {somma}')

# divisione = num1 / num2
if(num2 == 0):
    print("Impossibile dividere per zero")
else:
    divisione = num1 / num2
    # Stampa il risultato della divisione
    print(f'La divisione di {num1} / {num2} è: {divisione}')