/*
AUTHOR: Daniel Salvador

Esercizio 2
Nome file test2.c
Creare un semplice programma che mostra l’utilizzo dei puntatori e delle strutture. 
Il programma deve avere almeno 3 funzioni, due delle quali con tipo di ritorno struct o char

*/

#include <stdio.h>
#include <string.h>

//------------------------------------------------------------------------------------------------------

struct Person
{
    char nome[20];
    int eta;
};

typedef struct
{
    char nome[20];
    int cilindrata;
} Auto;


//------------------------------------------------------------------------------------------------------

int cambioValore(int x){

    x = 20;

    return x;
}

//------------------------------------------------------------------------------------------------------

char *cambioStringa(char nuovaStringa[20]){

    nuovaStringa = ("Mi chiamo Franco!");

    return nuovaStringa;

}

//------------------------------------------------------------------------------------------------------

/**
 * Metodo utilizzato per cambiare i valori di una struttura
 * passata come parametro
 */
void cambioValoriStruttura(Auto *a, const char *nome, int cilindrata){
    if (a == NULL) {
        return; // Handle null pointer safely
    }

    printf("\nBMW address: %p", &a);
    printf("\n");
    //printf("Inside cambioValoriStruttura\n");

    strncpy(a->nome, nome, sizeof(a->nome) - 1); // Safely copy the name
    a->nome[sizeof(a->nome) - 1] = '\0'; // Ensure null termination

    //printf("Nome: %s\nCilindrata: %d\n", a->nome, a->cilindrata);
    //printf("\n");
    a->cilindrata = 2500;
    //printf("Nome: %s\nCilindrata: %d\n", a->nome, a->cilindrata);
    //return a;
}


int main(){

//------------------------------------------------------------------------------------------------------

    int c , *ptr;
    
    c = 10;
    ptr = &c;

    printf("Contenuto variabile c : %d\n",c);
    printf("Indirizzo variabile c : %p\n",ptr);
    printf("Cambio valore variabile tramite puntatore , nuovo valore in c\n");

    *ptr  = 50;

    printf("Contenuto variabile c : %d\n",c);

//------------------------------------------------------------------------------------------------------
    
    
    int d = 10;

    printf("Contenuto variabile d  ( prima della funzione ): %d\n",d);

    d = cambioValore(*ptr); 

    printf("Contenuto variabile d : %d\n",d);    

//------------------------------------------------------------------------------------------------------

    char *stringa[] = {"Mi chiamo Daniel!"};
    char *nuovaStringa[20];

    printf("%s\n",*stringa);

    *nuovaStringa = cambioStringa(*stringa);

    printf("Dopo funzione :\n");

    printf("%s\n",*nuovaStringa);

//------------------------------------------------------------------------------------------------------

    struct Person p1 ;

    strcpy(p1.nome,"Pippo");

    p1.eta = 20;
    printf("\n");

    // Aggiunto dopo la consegna
    Auto bmw = {"520d",2000};
    printf("Nome: %s\nCilindrata: %d\n", bmw.nome, bmw.cilindrata);
    printf("BMW address: %p", &bmw);

    cambioValoriStruttura(&bmw, "530d", 2500);
    printf("Nome: %s\nCilindrata: %d\n", bmw.nome, bmw.cilindrata);

    return 0;
}