#include <stdio.h>

#define DIM 5

int main()
{
    int numeri[DIM];
    int flag = 1;
    int somma = 0;
    float media;
    int max;
    int min;

    printf("Inserisci 5 numeri: \n");
    for (int cont = 0; cont < DIM; cont++)
    {
        printf("Numero %d: ", flag);
        scanf("%d", &numeri[cont]);
        flag = flag + 1;
        //somma = somma + numeri[cont];
        //flag++;
        //printf("\n");
    }
    //printf("\nLa somma dei valori dell'array è: %d", somma);
    
    printf("\n--- RISULTATI ---");

    // Valori array
    printf("\nArray: ");
    for(int i=0; i < DIM; i++){
        printf("%d ", numeri[i]);
    }

    // Somma
    int sum = 0;
    for(int i=0; i < DIM; i++){
        sum = sum + numeri[i];
    }

    // Media
    printf("\nSomma: %d", sum);
    media = ((float)sum)/5;
    printf("\nMedia: %.2f", media);


    // Max
    for(int i=0; i < DIM; i++){
        if(numeri[i] > max){
            max = numeri[i];
        }
    }
    printf("\nMassimo: %d", max);

    // Min
    for(int i=0; i < DIM; i++){
        if(numeri[i] < min){
            min = numeri[i];
        }
    }
    printf("\nMinimo: %d", min);

    // Numeri pari
    printf("\nElementi pari ");
    for(int i=0; i < DIM; i++){
        if(numeri[i] % 2 == 0){
            printf("%d ", numeri[i]);
        }
    }

    return 0;
}