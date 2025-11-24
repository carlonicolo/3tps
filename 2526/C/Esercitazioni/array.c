#include <stdio.h>

int main()
{

    // Dimensione esplicita
    int palline[6] = {1, 2, 3, 4, 5, 6};
    printf("\nDimensione esplicita\n");
    for (int i = 0; i <= 5; i++)
    {
        printf("%d ", palline[i]);
    }

    // Dimensione parziale
    int x[3] = {25, 33};
    printf("\nDimensione parziale\n");
    for (int a = 0; a <= 2; a++)
    {
        printf("%d ", x[a]);
    }

    // Dimensione automatica
    int numeri[] = {101, 25, 53, 94};
    printf("\nDimensione automatica\n");
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", numeri[i]);
    }

    printf("%d", numeri[4]);

    return 0;
}