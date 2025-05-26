'''
# while
while (a > 0 and a < 7):
  #print("Ciao")
  #print(f'Valore di a prima del decremento {a}')
  a = a - 3
  #print(f'Valore di a dopo del decremento {a}')
  print(a)
  print("")
'''
'''
# Stampo numeri da 0 a 1000
b = 0
while(b <= 1000):
  print(b)
  b = b + 1
'''
'''
# Stampo i primi 100 numeri pari
c = 1
print("Primi 100 numeri pari: ")
while (c <= 100):
  if (c % 2 == 0):
    #print(f"Il numero c è pari: {c}")
    print(c)
  else:
    #print("Dispari")
    print("")

  c = c + 1

print(f'Fuori dal ciclo while')
# for
'''
'''
#scrivi i primi 100 numeri dispari
a = 1

print("I primi cento numeri dispari ")
while (a <= 100):
  if (a % 2 != 0):
    print(a)
  a = a + 1

print("")
d = 0
#tabellina = 5
while(d <= 10):
  print(5 * d)
  d = d + 1
'''
'''
# Valuta i numeri da 0 a 10
# se il numero è pari lo motiplichi per 3
# se il numero è dispari lo moltiplichi per 2
e = 0
while(e <= 10):
  if(e % 2 == 0):
     print(e * 3)
  else:
     print(e * 2)
     #print(e)
    
  e = e + 1

'''
'''
# OK
num1 = int(input("Inserisci un numero "))
a = 1
while(a <= num1):
  print(a)
  a = a + 1
  '''



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
