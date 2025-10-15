a = 6
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