def somma(a, b):
    risultato = a + b
    return risultato

def sum_lst(lst):
    print(lst[0])
    

def menu():
    num1 = int(input("Inserisci il primo numero: "))
    num2 = int(input("Inserisci il secondo numero: "))
    lst = [30, 40, 50]
    print("La somma è:", somma(num1,num2))
    print(sum_lst(lst))

menu()