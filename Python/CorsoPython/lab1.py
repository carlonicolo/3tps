# Questo è un commento
# Dichiarazione di variabili
var1 = 5        # variabile tipo int
var2 = 5.0      # variabile tipo float
var3 = "Ciao"   # variabile tipo str cioè stringa
var4 = True     # variabile tipo bool che può essere True o False

print(type(var1))
print(type(var2))
print(type(var3))
print(type(var4))

num1 = 10
num2 = 8
# Operazioni
risultato_somma = num1 + num2           # Addizione
risultato_sottrazione = num1 - num2     # Sottrazione
risultato_prodotto = num1 * num2        # Prodotto
risultato_divisione = num1 / num2       # Divisione

print(f'Somma: {risultato_somma}')
print(f'Sottrazione: {risultato_sottrazione}')
print(f'Prodotto: {risultato_prodotto}')
print(f'Divisione: {risultato_divisione}')

print(f'var4: {var4}')
var4 = num1 < num2
print(f'Risultato comparazione num1 < num2: {var4}')