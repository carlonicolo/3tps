# Semplice programma di noleggio veicoli
# Utilizzo while, input, scrittura e lettura file

lista_auto = []
lista_moto = []

# TODO
# Lettura e riempimento di liste veicoli
# da file di testo
# esempio moto.txt; auto.txt
file = open("3tps/2627/Python/Lab2/files/auto.txt", "r")
line = file.readline()
while line:
    print(line.strip())
    lista_auto.append(line.strip())
    line = file.readline()
file.close()

# print(lista_auto)


