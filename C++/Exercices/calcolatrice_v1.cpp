#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    cout << "########## CALCOLATRICE SEMPLICE ##########\n\n";

    // dichiara variabili

    int num1;
    int num2;
    char op;

    // fai i calcoli nel while

    int flag = 0;
    int fine = 0;

    while (fine != 1)
    {
        cout << "Inserisci il primo valore" << endl;
        cin >> num1;
        cout << "Inserisci il secondo valore" << endl;
        cin >> num2;
        cout << "Inserisci l'operatore +,-,*,/" << endl;
        cin >> op;
        switch (op)
        {
        case '+':
            int somma;
            somma = num1 + num2;
            cout << "La somma dei valori : " << somma << endl;
            flag = 1;
            break;
        case '-':
            int sottrazione;
            sottrazione = num1 - num2;
            cout << "La sottrazione dei valori : " << sottrazione << endl;
            flag = 1;
            break;
        case '*':
            int moltiplicazione;
            moltiplicazione = num1 * num2;
            cout << "La moltiplicazione dei valori : " << moltiplicazione << endl;
            flag = 1;
            break;
        case '/':
            int divisione;
            divisione = num1 / num2;
            cout << "La divisione dei valori : " << divisione << endl;
            flag = 1;
            break;
        default:
            cout << "Operation currently not supported." << endl;
        }

        cout << "Hai finito ? si premi 1 ,no premi 2" << endl;
        cin >> fine;

        if (fine == 1)
        {
            cout << "arrivederci" << endl;
            fine = 1;
        }
        if (fine == 2)
        {
            cout << "Allora continuiamo!" << endl
                 << endl;
            fine = 0;
        }
    }

    return 0;
}