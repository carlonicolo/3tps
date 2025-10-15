parola_segreta = "Ciao"
parola_utente = ""
contatore = 1
while((parola_utente != parola_segreta) and (contatore <= 10)):
    parola_utente = input("Inserisci una parola ")
    if(parola_utente == parola_segreta):
        print(f"Hai vinto in {contatore} mosse")
    else:
        print("riprova")
        contatore = contatore + 1

    if(contatore == 10):
        contatore = contatore + 1
        print("Hai esaurito le possibilità!")
    
    if(contatore > 10):
        print("Hai esaurito le tue possibilità, mi dispiace")
    else:
        print("Hai vinto!!")
        contatore = contatore + 1