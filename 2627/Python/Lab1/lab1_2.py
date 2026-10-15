numeroMagico = 3

guessNumber = int(input("Inserisci il numero magico "))
print(type(guessNumber))

if(guessNumber == numeroMagico):
    print(f'Bravo {guessNumber} è il numero magico !')

else:
    print("Mi dispiace hai perso !")

# Prima versione con ciclo while
# Continua a chiedere di inserire un numero
# tra 0 e 5 fino a quando non si indovina
print("Indovina il numero magico compreso tra 0 e 5")
while(guessNumber != numeroMagico):
    guessNumber = int(input("Indovina il numero magico "))
    if(guessNumber == numeroMagico):
        print("Complimenti hai indovinato il numero magico ", guessNumber)
    else:
        print("Mi dispiace ritenta sarai più fortunato!")


