
/*
AUTHOR: Daniel Salvador

Nome file test1.c
Creare un semplice programma che mostra l’utilizzo delle funzioni nel linguaggio di programmazione C.
Utilizzare almeno una funzione per tipo di dato(int, float, array int o float) 
oltre ad una funziona di tipo void


*/

#include <stdio.h>

//FUNZIONI COMPILATE 

int somma(int x,int y){

    int somma;

    somma = x + y;

    return somma; //( è possibile ritornare direttamente la il calcolo x + y ) (esempio: return x + y;)

}

// FUNZIONE ARRAY

void ciclaArray(float x[]){

    printf("Sono nella funzione : \n");

    for (int i = 0; i < 4; i++)
    {
        printf("%f\n",x[i]);
        x[i] = x[i] +1;
    }

    //return x;
}

// FUNZIONE VOID 

void saluto(){

    printf("Sono una funzione void e non restituisco nulla!\n");


}


int main(){

    // FUNZIONE SOMMA

    int a = 5;
    int b = 10;
    int c ;
    
    c = somma(a,b);
    printf("%d\n", c);

    // FUNZIONE CON ARRAY DI FLOAT

    
    float array[] = {1.2, 3.5, 7.8, 2.1}; 

    ciclaArray(array);

    printf("Sono fuori dalla funzione : \n" );
    for (int i = 0; i < 4; i++)
    {
        printf("%f\n",array[i]);
    }

    // funzione void 

    saluto();


    return 0;
}