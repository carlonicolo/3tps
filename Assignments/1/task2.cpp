#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int iMax, iMin;

	iMax = 0;
	iMin = 0;

    int lista[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Insert an integer value between 1 and 10: " << endl;
        cin >> lista[i];
    
		if(lista[i] > lista[iMax]){
			iMax=i;
		}
		if(lista[i] < lista[iMin]){
			iMin=i;
		}
	}
	cout << "Il valore massimo dell'array è: " <<  lista[iMax] << " e si trova nella posizione" << iMax << endl;
	cout << "Il valore massimo dell'array è: " <<  lista[iMin] << " e si trova nella posizione" << iMin << endl;


	return 0;
}