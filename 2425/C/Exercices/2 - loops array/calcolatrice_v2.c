#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

    // printf("########## CALCOLATRICE SEMPLICE ##########\n\n\n");

    float num1 = 0;
    float num2 = 0;
    char operator;
    int flag = 0;

    while (flag != 1)
    {

        printf("Inserisci il primo valore : \n");
        scanf("%f", &num1);

        printf("Inserisci il secondo valore : \n");
        scanf("%f", &num2);

        printf("Inserisci l'operatore +,-,*,/ \n");
        // NOTA BENE: %c vuole uno spazio per non prendere il new line come carattere
        scanf(" %c", &operator); 

        //printf("Operator %c \n", operator);

    

        switch (operator)
        {
        case '+':
            //float somma = num1 + num2;
            printf("Il risultato della somma è : %f\n", num1 + num2);
            break;
        case '-':
            //float sottrazione = num1 - num2;
            printf("Il risultato della sottrazione è : %f\n", num1 - num2);
            break;
        case '*':
            //float moltiplicazione = num1 * num2;
            printf("Il risultato della moltiplicazione è : %f\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0)
            {
                printf("Non è possibile dividere per zero\n");
                printf("Inserisci un nuovo valore : \n");
                scanf("%f", &num2);
            }
            if (num2 != 0)
            {

                //float divisione = num1 / num2;
                printf("Il risultato della divisione è : %f\n", num1 / num2);
            }
            break;
        }

        int fine;
        printf("Hai finito ? si premi 1 ,no premi 2\n");
        scanf("%d", &fine);

        if (fine == 1)
        {
            printf("FINE\n");
            flag = 1;
        }
        if (fine == 2)
        {
            printf("Continuiamo\n");
            flag = 0;
        }
    }

    return 0;
}