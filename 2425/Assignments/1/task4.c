#include <stdio.h>
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int somma = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < 0)
        {
            somma = somma + a[i];
            a[i] = 0;
        }
    }
    printf("somma = %d ", somma);
    printf("Contenuto array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}