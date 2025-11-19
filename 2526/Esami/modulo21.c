#include <stdio.h>

int main()

{
    int num[2];
    num[0] = 1;
    num[1] = 1;
    int mul, mul1;
    char push = ' ';

    printf("Inserisci il primo numero per la sua tabellina: ");
    scanf("%d", &num[0]);
    while (num[0] <= 0)
    {
        printf("Numero non valido, Inserire nuovo numero: ");
        scanf("%d", &num[0]);
    }

    printf("Inserisci il secondo numero per la sua tabellina: ");
    scanf("%d", &num[1]);

    while (num[1] <= 0)
    {
        printf("Numero non valido, Inserire nuovo numero: ");
        scanf("%d", &num[1]);
    }

    for (int cont = 0; cont <= 10; cont++)
    {

        mul = num[0] * cont;
        mul1 = num[1] * cont;

        printf("%d x %d = %d\t\t", num[0], cont, mul);
        printf("%d x %d = %d\n", num[1], cont, mul1);
    }

    printf("Premi 'e' per uscire dal programma\n");
    scanf("%s", &push);

    if (push == 'e')
    {
        printf("Grazie alla prossima!");
    }
    else if (push != 'e')
    {
        printf("istruzione non riconosciuta!, bug rilevato!");
    }

    return 0;
}