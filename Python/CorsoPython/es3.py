a = int(input("Inserisci un numero intero: "))
b = int(input("Inserisci un altro numero intero: "))

# a e b sono il valore degli anni di due ragazzi
# effettuiamo varie comparazioni
if(a > b):
    print(f'{a} è maggiore di {b}')
elif(a < b):
    print(f'{a} è minore di {b}')
else:
    print(f'{a} è uguale a {b}')
    
if((a > 2) and (b < 7)):
    print("WOW")
elif((a < 2) and (b > 7)):
    print("Buuu")
else:
    print("Mi dispiace hai perso.")
