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

/*
char struttura(p1){

    strcpy(p1.nome,"Pluto");
    p1.eta = 30

    return ;

}
*/




int main(){

//------------------------------------------------------------------------------------------------------

    int c , *ptr;
    
    c = 10;
    ptr = &c;

    printf("Contenuto variabile c : %d\n",c);
    printf("Indirizzo variabile c : %p\n",ptr);
    printf("Cambio valore variabile tramite puntatore , nuovo valore in c\n");

    *ptr  = 10;

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

    //cambioStruttura(struct Person p1);




    return 0;
}