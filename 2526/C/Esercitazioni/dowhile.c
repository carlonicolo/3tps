#include <stdio.h>

int main(){

    int num;
    //printf("Inserisci un numero intero: ");
    //scanf("%d", &num);

    do{
        printf("Inserisci 1 per la somma.");
        printf("\nInserisci 2 per il prodotto.");
        printf("\nInserisci 0 per uscire.\n");
        scanf("%d", &num);
        
        if(num == 1){
            printf("\nRichiamo la funzione somma()");
        }
        if(num == 2){
            printf("\nRichiamo la funzione prodotto()");
        }
        
    } while(num != 0);

    return 0;
}