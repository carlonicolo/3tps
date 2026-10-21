lst = [1,4,6,10,3]
# print(lst[0])
# print(lst[1])
# print(lst[2])
# print(lst[3])
# print(lst[4])

# Funzione per conoscere la lunghezza di una lista
print(len(lst))


# Esercizio 1 - stampare tutti i valori della lista utilizzando
# un ciclo while
print("---- Esercizio 1 ----")
print("Stampa tutti i valori di una lista con un ciclo while")
counter = 0
while(counter < len(lst)):
    print(lst[counter])
    counter = counter + 1
    
print("-----------")

# Esercizio 2
# Visualizza solo gli elementi pari contenuti in una lista
print("---- Esercizio 2 ----")
print("Visualizza solo gli elementi pari contenuti in una lista")
lst_num = [2,1,7,10,9,8]
counter = 0
while(counter < len(lst_num)):
    if(lst_num[counter] % 2 == 0):
        print(lst_num[counter])
        counter = counter + 1
    else:
        counter = counter + 1
print("-----------")


