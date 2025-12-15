'''
Condizioni
If, else, elif
'''

num1 = 1
num2 = 2

somma = num1 + num2

if(num1 > num2):
    print("num1 è maggiore di num2")
elif(num1 < num2):
    print("num1 è minore di num2")
else:
    print("num1 e num2 sono uguali")


if(num1 > num2):
    print(f'{num1} è maggiore di {num2}')
elif(num1 < num2):
    print(f'{num1} è minore di {num2}')
else:
    print(f'{num1} è uguale a {num2}')
