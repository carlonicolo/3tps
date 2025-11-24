#include <stdio.h>

#define DIM 5

int main()
{
    int numeri[DIM];
    int flag = 1;

    printf("Inserisci 5 numeri: \n");
    for (int cont = 0; cont < DIM; cont++)
    {
        printf("Numero %d: ", flag);
        scanf("%d", &numeri[cont]);
        flag = flag + 1;
        //flag++;
        //printf("\n");
    }

    return 0;
}