''' 
Programma calcolatrice
Visualizza un menu di scelta operazioni (funzioni):
- somma
- prodotto
- differenza
- rapporto
- quadrato
- check se è pari o dispari
'''
import math
import operazioni as op

def main():
    
    try:
        lst = [3,4,5]
        res = op.somma(lst)
        print("Somma: ", res)
        
        res = op.sottrazione(lst)
        print("Sottrazione: ", res)
        
        res = op.prodotto(lst)
        print("Prodotto: ", res)
        
        res = op.divisione(lst)
        print("Divisione: ", res)
        

    except Exception as e:
        print("Exception -> ", e)
  
if __name__ == "__main__":
    main()