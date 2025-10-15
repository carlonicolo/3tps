#include <stdio.h>

int main()
{

    int iMax, iMin;

	iMax = 0;
	iMin = 0;

    int lista[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Insert an integer value between 1 and 10: ");
        scanf("%d", &lista[i]);
    
		if(lista[i] > lista[iMax]){
			iMax=i;
		}
		if(lista[i] < lista[iMin]){
			iMin=i;
		}
	}
	printf("Il valore massimo dell'array è: %d e si trova nella posizione: %d\n", lista[iMax], iMax);
	printf("Il valore minimo dell'array è: %d e si trova nella posizione: %d\n", lista[iMin], iMin);


	return 0;
}

