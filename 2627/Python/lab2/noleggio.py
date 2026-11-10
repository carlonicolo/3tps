# Semplice programma di noleggio veicoli
# Utilizzo while, input, scrittura e lettura file

lista_auto = []
lista_moto = []

# TASK 1
# TODO
# Lettura e riempimento di liste veicoli
# da file di testo
# esempio moto.txt; auto.txt
file_auto = open("3tps/2627/Python/Lab2/files/auto.txt", "r")
line_auto = file_auto.readline()
while line_auto:
    print(line_auto.strip())
    lista_auto.append(line_auto.strip())
    line_auto = file_auto.readline()
file_auto.close()
print(lista_auto)

print("*******---*******")

file_moto = open("3tps/2627/Python/Lab2/files/moto.txt", "r")
line_moto = file_moto.readline()
while line_moto:
    print(line_moto.strip())
    lista_moto.append(line_moto.strip())
    line_moto = file_moto.readline()
file_moto.close()
print(lista_moto)

print(" ")

# Task 2
# TODO
# Mostrare all'utente le auto disponibili e chiedere
# all'utente di selezionarne una
print("Scegli una delle seguenti auto da noleggiare: ")
for indice, lst in enumerate(lista_auto):
    print(f'{indice} - {lst}')

# mostra le auto disponibili
# esempio 0 - BMW
#         1 - Mercedes

scelta_auto = int(input("Segli il numero corrispondente alla marca dell'auto che preferisci: "))
if lista_auto[scelta_auto] == "BMW":
    print(f'Hai scelto la BMW')
# TODO
# inserire le scelte
elif 
