liv1 = "Mosca"
liv2 = "Africa"
liv3 = "Nuova Zelanda"
# numero_vite = 5
contatore = 5
# risposta = "Inserisci una parola "
# contatore_risposte = True

risposta = input("Quale è la capitale della Russia? ")

while((contatore != 0)):
    if(risposta == liv1):
        print("Complimenti risposta esatta !!!")
        print("Passi al secondo livello")
        if(contatore == 5):
            contatore = contatore + 1
        
        # SECONDO LIVELLO
        while(contatore != 0):
            risposta = input("Dove si trova il Kilimangiaro? ")
            if(risposta == liv2):
                print("Complimenti risposta esatta !!!")
                print("Passi al secondo livello")
                
                if(contatore == 6):
                    contatore = contatore + 1
            else:
                contatore = contatore - 1
                print("Mi dispiace hai sbagliato riprova")
                print(f'Hai ancora {contatore} possibilità')
                #risposta = input("Dove si trova il Kilimangiaro? ")       
                               
    else:
        contatore = contatore - 1
        print("Mi dispiace hai sbagliato riprova")
        print(f'Hai ancora {contatore} possibilità')
        risposta = input("Quale è la capitale della Russia? ")  
        
        
        
        
        
 