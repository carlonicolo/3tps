def somma(a: int, b: int) -> int:
    risultato = a + b
    return risultato


def sum_lst(lst: list) -> int:
    print(lst[0])


def menu() -> None:
    num1 = int(input("Inserisci il primo numero: "))
    num2 = int(input("Inserisci il secondo numero: "))
    lst = [30, 40, 50]
    print("La somma è:", somma(num1, num2))
    print(sum_lst(lst))


menu()
