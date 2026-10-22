# Laboratorio ciclo for

# Su una lista
# Scrittura con sovrascrittura (modalità 'w')
with open("lab1_4_output.txt", "w", encoding="utf-8") as f:
    print("Esercizio 1 - for su lista")
    f.write("Esercizio 1 - for su lista\n")
    for nome in ["Alice", "Bob", "Charlie"]:
        print(nome)
        f.write(nome+"\n")
    print("--------------------")
    f.write("--------------------\n")

# Su una stringa (itera carattere per carattere)
print("Esercizio 2 - for su stringa, itera carattere per carattere")
for lettera in "Python":
    print(lettera)
print("--------------------")

# range(inizio, fine_esclusa, passo)
print("Esercizio 3 - range(inizio, fine_esclusa, passo)")
for i in range(1, 6, 2):
    print(i)  # Stampa: 1, 3, 5
print("--------------------")

print("Esercizio 4 - utilizzo enumerate")
colori = ["rosso", "verde", "blu"]
for indice, colore in enumerate(colori):
    print(f"Posizione {indice}: {colore}")
# Stampa: Posizione 0: rosso, Posizione 1: verde...
print("--------------------")
