#include <iostream>
using namespace std;

int main()
{
    int somma;
    int prodotto;
    int differenza;
    double rapporto;
    int input;
    
    int i = 0;
    do
    {
        cout << i << "\n";
        i++;
    } while (i < 5);


    do
    {
        cout << "1 - per la somma" << "\n";
        
        cout << "2 - per il prodotto" << "\n";

        cout << "3 - per la differenza" << "\n";
        
        cout << "4 - per il rapporto" << "\n";

        cout << "0 - per uscire" << "\n";

        cin >> input;
        

        
    } while (input != 0);

    return 0;
}