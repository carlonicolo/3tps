#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int num;
    int num2;
    int num3;
    int randomNumlivello1 = rand() % 26;
    int randomNumlivello2 = rand() % 51;
    int randomNumlivello3 = rand() % 101;
    int i = 0;
    int i2 = 0;
    int i3 = 0;
    int vite = 5;
    cout << "magic number 1: " << randomNumlivello1 << endl;
    cout << "magic number 2: " << randomNumlivello2 << endl;
    cout << "magic number 3: " << randomNumlivello3 << endl;
    cout << "" << endl;
    cout << "=================== Primo Livello ===================" << endl;
    cout << "Inseisci un numero per superare il primo livello: " << endl;
    while (i <= 5)
    {
        cin >> num;
        if (num == randomNumlivello1)
        {
            cout << "Hai superato il primo livello" << endl;
            cout << "Inserisci un numero per superare il secondo livello: " << endl;
            vite++;
        }
        else
        {
            vite--;
            if (vite == 0)
            {
                cout << "Game over" << endl;
                return 0;
            }
            i++;
        }
    }

    return 0;


/* 
    while (vite <= 5 || vite >= 5)
    {
        cin >> num2;
        if (num2 == randomNumlivello2)
        {
            cout << "Hai superato il primo livello" << endl;
            cout << "Inserisci un numero per superare il secondo livello: " << endl;
            vite++;
        }
        else
        {
            i2++;
            vite--;
            if (vite == 0)
            {
                cout << "Game over" << endl;
            }
        }
        while (vite != 0 || num3 == randomNumlivello3)
        {
            cin >> num3;
            if (num3 == randomNumlivello3)
            {
                cout << "Hai superato il terzo livello" << endl;
                cout << "Hai vinto!!!" << endl;
                vite++;
            }
            else
            {
                cout << "Riprova" << endl;
                i3++;
                vite--;
                if (vite == 0)
                {
                    cout << "Game over" << endl;
                }
            }
        }
    }
*/
}