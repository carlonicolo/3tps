#Esercizio 4: Trova il numero più grande
#Chiedi all’utente di inserire numeri interi uno per uno. 
#Continua finché l’utente non inserisce 0. 
#Alla fine, stampa il numero più grande inserito (escludendo lo zero).

big_number = 0
num1 = 1
while(num1 != 0):
  num1 = int(input("Inserisci un numero diverso da 0 oppure 0 per uscire e conoscere il numero più grande inserito: "))
  if(num1 > big_number):
    big_number = num1

print(f'Il numero più grande è: {big_number}')
    
    

num1 = int(input("Inserisci la tua età "))
 
if(num1 == 1):
  print("Sei un neonato")
elif((num1 >= 1) and (num1 <=6)):
  print("Sei piccolino")
elif((num1 >= 6) and (num1 <=10)):
  print("Sei un bambino")
elif((num1 >= 10) and (num1 <=14)):
  print("Sei un ragazzo")
elif((num1 >= 14) and (num1 <=18)):
  print("Sei un giovane")
elif((num1 >= 18) and (num1 <=40)):
  print("Sei un uomo")
elif((num1 >= 40) and (num1 <=70)):
  print("Sei maturo")
else:
  print("Sei old")
