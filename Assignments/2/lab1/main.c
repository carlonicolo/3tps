#include <stdio.h>
#include "lab1.h"

int main() {

    // FUNZIONE SOMMA

    int a = 5;
    int b = 10;
    int c ;
    char greeting[100] = "Sono una stringa";
    char *greeting_result;
    
    c = somma(a,b);
    printf("%d\n", c);
    
    float array[] = {1.2, 3.5, 7.8, 2.1}; 
    ciclaArray(array);

    printf("Sono fuori dalla funzione : \n" );
    for (int i = 0; i < 4; i++)
    {
        printf("%f\n",array[i]);
    }

    saluto();

    greeting_result = getGreeting(greeting);
    printf("%s\n", greeting_result);
    printf("\n");


    return 0;
}