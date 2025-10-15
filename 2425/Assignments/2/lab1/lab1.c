#include "lab1.h"
#include<stdio.h>
#include <string.h>

int somma(int x, int y)
{
    int somma;
    somma = x + y;
    return somma; //( è possibile ritornare direttamente la il calcolo x + y ) (esempio: return x + y;)
}

void ciclaArray(float x[])
{
    printf("Sono nella funzione : \n");

    for (int i = 0; i < 4; i++)
    {
        printf("%f\n", x[i]);
        x[i] = x[i] + 1;
    }
}

void saluto()
{
    printf("Sono una funzione void e non restituisco nulla!\n");
}

char *getGreeting(char stringa[100])
{
    char str[] = "!!!";
    strcat(stringa, str);
    //printf("%s", stringa);
    return stringa;
}