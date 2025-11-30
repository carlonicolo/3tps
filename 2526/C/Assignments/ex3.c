/*
- Scrivi un semplice programma dove utilzzi
il ciclo for

- Scrivi un semplice programma dove utilzzi
il ciclo while

- Scrivi un semplice programma che richiede all'utente
di inserire due valori numerici e ne calcola:
la somma, la differenza, il prodotto ed il rapporto(!!!!! non si può di dividere per 0)

- Scrivi un programma che utilizza gli array
*/

#include <stdio.h>

// Funzione di tipo int
int somma(int a, int b)
{
    return a + b;
}

// Funzione void
void sommaNumeri(int a, int b)
{
    printf("\nLa somma dei due parametri %d + %d = %d", a, b, a+b);
}

int main()
{

    // Task 0
    // Scrivi un semplice programma dove utilzzi il ciclo for
    int num = 10;
    for (int i = 0; i <= num; i++)
    {
        printf("%d ", i);
    }

    // Task 1
    // Scrivi un semplice programma dove utilzzi il ciclo while
    int num1;
    int cont = 0;

    printf("Inserisci un numero: ");
    scanf("%d", &num1);

    while (cont <= num1)
    {
        printf("%d\n", cont);
        cont++;
    }

    int res_somma;
    res_somma = somma(5, 6);
    printf("%d\n", res_somma);
    sommaNumeri(10, 20);

    // TASK 2
    // Scrivi un semplice programma che richiede all'utente di inserire due valori numerici e ne calcola:
    // la somma, la differenza, il prodotto ed il rapporto
    // (!!!!! non si può di dividere per 0)
    int num3;
    int num4;
    int sum;

    printf("\nInserisci il primo numero ");
    scanf("%d", &num3);

    printf("\nInserisci il primo numero ");
    scanf("%d", &num4);

    sum = num3 + num4;
    printf("\nLa somma di %d + %d = %d", num3, num4, sum);


    int dividendo;
    int divisore;
    int risultato;
    printf("\nInserisci il dividendo ");
    scanf("%d", &dividendo);

    printf("\nInserisci il divisore ");
    scanf("%d", &divisore);

    if(divisore != 0){
        risultato = dividendo/divisore;
    }else{
        printf("Non posso dividere per 0\n");
    }
    

    // Task 4 
    // array
    int arr[3];
    for(int i=0; i <= 3; i++){
        arr[i]=2*i;
        printf("%d ", arr[i]);
    }

    //somma tutti i valori di arr
    



    return 0;
}