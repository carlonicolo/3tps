import csv

# Scrittura
""" with open("studenti.csv", "w") as file:
    writer = csv.writer(file)
    writer.writerow(["Nome", "Età"])
    writer.writerow(["Alice", 25])
    writer.writerow(["Bob", 22]) """

# Lettura
with open("studenti.csv", "r") as file:
    reader = csv.reader(file)
    for riga in reader:
        print(riga)