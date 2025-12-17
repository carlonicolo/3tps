def somma(a: int, b: int) -> int:
    risultato = a + b
    return risultato


def first_num_lst(lst: list) -> int:
    # print(lst[0])
    return lst[0]

def menu() -> int:
    num1 = int(input("Inserisci il primo numero: "))
    num2 = int(input("Inserisci il secondo numero: "))
    return num1, num2

num1, num2 = menu()
res_somma = somma(num1, num2)
print(f'("La somma di {num1} + {num2} è :", {res_somma})')
# print("La somma è:", somma(num1, num2))

lst = [30, 40, 50]
first_num = first_num_lst(lst)
print("Il primo numero della lista è: ", first_num)

isNum1Maggiore = False 
isBlue = False

if(num1 > num2):
    isNum1Maggiore = True


isEven = (num1 % 2 == 0)
print("E' pari? ", isEven)