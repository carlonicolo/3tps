import json

# Scrittura
dati = {
    "students": [
        {"name": "Alice", "age": 25},
        {"name": "Bob", "age": 22}
    ],
    "course": "Computer science"
}

with open("dati.json", "w") as file:
    json.dump(dati, file, indent=4)

# Lettura
with open("dati.json", "r") as file:
    dati_caricati = json.load(file)
    print(dati_caricati["students"][0]["name"])  # Alice