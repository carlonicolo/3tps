#include <stdio.h>

int main()
{
    // dichiaro ed assegno valori ad un array di int
    int myNumbers[] = {25, 50, 75, 100};

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", myNumbers[i]);
    }

    // stampa il valore 100
    printf("\n%d\n", myNumbers[3]);

    return 0;
}