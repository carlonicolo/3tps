# Assignment 5 – Array, cicli e numeri pari/dispari

In questo esercizio lavorerai con array, cicli `for` e semplici controlli sui numeri (pari/dispari) utilizzando il linguaggio C.

Userai questi due array di partenza:

```c
int arr1[10] = {20,33,56,12,57,89,120,31,9,101};
int arr2[5]  = {23,45,67,89,101};
```

## Obiettivi
* Saper scorrere un array con un ciclo for
* Creare nuovi array a partire da uno esistente
* Distinguere numeri pari e dispari in C (% 2)
* Confrontare il contenuto di due array in base a una proprietà (pari/dispari)

### Task 1 – Array al contrario
**Richiesta**:
* Crea un array arrContrario che contenga i valori di arr1 in ordine inverso.

* Tipo: int
* Dimensione: 10 (come arr1)

Esempio di logica: il primo elemento di arrContrario sarà l’ultimo di arr1, il secondo sarà il penultimo, ecc.

*Suggerimenti*:  
Usa un ciclo for che parte dall’ultimo indice di arr1 e vai verso lo 0.  
Ricordati che in C gli indici partono da 0.

### Task 2 – Array dei pari e dei dispari
**Richiesta**:
Partendo da arr1, crea due nuovi array:

* arrPari → contiene solo i numeri pari di arr1
* arrDispari → contiene solo i numeri dispari di arr1

Puoi scegliere se:

* usare due array della stessa dimensione di arr1 (riempiendo solo una parte)
e tenere due variabili countPari, countDispari per il numero effettivo di valori
oppure  

* contare prima quanti pari/dispari ci sono e poi creare gli array della dimensione giusta (se usi allocazione dinamica).

*Suggerimento per il controllo pari/dispari*:

```c
if (valore % 2 == 0) {
    // pari
} else {
    // dispari
}
```

### Task 3 – Confronto tra arr1 e arr2
**Richiesta**:
Confronta i due array arr1 e arr2 e stampa:
* Quanti numeri pari ci sono in arr1 e quanti in arr2

* Quanti numeri dispari ci sono in arr1 e quanti in arr2

* Quale dei due array ha:

  * più numeri pari

  * più numeri dispari (specifica il nome dell’array e il numero)

*Esempio di output (forma indicativa)*:


arr1: 5 numeri pari, 5 numeri dispari
arr2: 1 numeri pari, 4 numeri dispari

Più numeri pari: arr1 (5)
Più numeri dispari: arr2 (4)
(i numeri sono solo di esempio, dovrai calcolarli realmente nel programma)