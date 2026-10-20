# Laboratorio ciclo for

# Su una lista
for nome in ["Alice", "Bob", "Charlie"]:
    print(nome)

# Su una stringa (itera carattere per carattere)
for lettera in "Python":
    print(lettera)

# range(inizio, fine_esclusa, passo)
for i in range(1, 6, 2):
    print(i)  # Stampa: 1, 3, 5
    

colori = ["rosso", "verde", "blu"]

for indice, colore in enumerate(colori):
    print(f"Posizione {indice}: {colore}")
# Stampa: Posizione 0: rosso, Posizione 1: verde...

