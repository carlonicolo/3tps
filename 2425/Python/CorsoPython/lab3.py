num1 = int(input("Inserisci il primo numero "))
num2 = int(input("Inserisci il secondo numero "))

if((num1 > 10) and (num2 < 12)):
    print("Wow!")
elif((num1 < 10) and (num2 > 12)):
    print("Eii!")
else:
    print("HAI VINTO!")

if((num1 == 7) or (num2 > 15)):
    print("Vero")
elif((num1 < 15) or (num2 == 7)):
    print("Falso")
else:
    print("Dobbiamo rifare tutto")