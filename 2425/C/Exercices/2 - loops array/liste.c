#include <stdio.h>

int main()
{
    // Esercizi con le liste in python , queste possono essere definite come gli array in c e c++
    // Si può dichiarare una lista senza inizializzarla subito

    int lst[5];
    // printf(type(lst));

    // copy list :  in c per copiare liste di array in altre liste di array dobbiamo usare il for

    printf("#################\n");
    printf("Lista copiata\n\n");

    int lst1[] = {2, 10, 4, 11, 5};

    for (int i = 0; i < 5; i++)
    {

        lst[i] = lst1[i];
    }

    // Per stampare a video il contenuto di un array lo devi ciclare in un for

    for (int j = 0; j < 5; j++)
    {
        printf("lst = %d\n", lst[j]);
    }

    printf("\n-------------\n\n");
    
    for(int t = 0;t<5;t++){

        printf("lst1 = %d\n", lst1[t]);
    }

    printf("\n#################\n\n");

    printf("\nNumero di elementi in un array\n\n");

    int dimensione = sizeof(lst)/sizeof(lst[0]);                    // per conoscere il numero degli elementi in un array in c 
                                                                    // posso solo capire da quanti byte è composto l'array
                                                                    // e dividerlo per i byte del primo valore contenuto in esso
    printf("Il numero di elementi nel array : %d\n\n ",dimensione);

    printf("\n#################\n\n");

    printf("\nOrdinare elementi nel array :\n\n");

    int ordine = sizeof(lst)/sizeof(lst[0]);
    int i;
    int j;
    int temp;

    for(i = 0; i<ordine - 1;i++){

        for(j = 0;j < ordine - i -1;j++){             // da spiegare in classe , non capito come fa il ciclo
            if(lst[j] > lst[j + 1]){
                temp = lst[j];
                lst[j] = lst [j + 1];
                lst[ j + 1] = temp;
            }
        }
    }

    // stampo a video dopo ordinamento

    for(int k = 0;k<ordine;k++){
        printf("Lst = %d\n",lst[k]);
    }


    // Inizializzazione variabile di tipo string , usando le quadre possiamo indicare quale carattere della variabile
    // vogliamo stampare a video, ricordandoci che si inizia a contare da 0. 

    char var[] = "Hello";       // per dichiarare stringhe in c si usa il char seguito dalle quadre (array di char)

    printf("#################\n");
    printf("Stringa stampata a video in ambo i sensi di lettura\n");

    printf("%c\n",var[0]);
    printf("%c\n",var[1]);
    printf("%c\n",var[2]);
    printf("%c\n",var[3]);
    printf("%c\n",var[4]);

    printf("\n--------\n");

    printf("%c\n",var[4]);
    printf("%c\n",var[3]);
    printf("%c\n",var[2]);
    printf("%c\n",var[1]);
    printf("%c\n",var[0]);

    printf("\n#################\n\n");

    // Esercizio : usare il metodo corretto per stampare a video ['H','e','l','l','o'] contenuto nella seguente lista

    printf("#################\n");

    int lst_word[] ={var[5], var[4], var[3], var[2], var[1]};       // va ordinato come il ciclo che non ho capito?
    

    
}