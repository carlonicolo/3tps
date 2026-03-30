#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    int tentativo;
    bool esc = false;
    int vite = 5;

    srand(time(0));

    cout << " LIVELLO 1\n"
         << "***********\n\n"
         << "Indovina il numero da 0 a 25, hai " << vite << " Vite:\n";

    int ran = rand() % 26;

    while (!esc)
    {
        cin >> tentativo;

        if (tentativo == ran)
        {
            esc = true;
        }
        else
        {
            vite--;
            cout << "Numero sbagliato!...Riprova, hai " << vite << " Vite\n";
        }
        if (vite == 0)
        {
            cout << "GAME OVER! Hai " << vite << " Vite";
            return 0;
        }
    }

    vite++;
    cout << "\n\nComplimenti! hai indovinato il numero e hai guadagnato 1 vita, ora ne hai " << vite << endl;
    esc = false;

    cout << "\n LIVELLO 2\n"
         << "***********\n\n"
         << "Indovina il numero da 0 a 50, hai " << vite << " Vite:\n";

    ran = rand() % 51;

    while (!esc)
    {
        cin >> tentativo;

        if (tentativo == ran)
        {
            esc = true;
        }
        else
        {
            vite--;
            cout << "Numero sbagliato!...Riprova, hai " << vite << " Vite\n";
        }
        if (vite == 0)
        {
            cout << "GAME OVER! Hai " << vite << " Vite";
            return 0;
        }
    }
    vite += 2;
    cout << "Complimenti! hai indovinato il numero e hai guadagnato 2 vita, ora ne hai " << vite << endl;
    esc = false;

    cout << "\nULTIMO LIVELLO! \n"
         << "***********\n\n"
         << "Indovina il numero da 0 a 100, hai " << vite << " Vite:\n";

    ran = rand() % 101;

    while (!esc)
    {
        cin >> tentativo;

        if (tentativo == ran)
        {
            esc = true;
        }
        else
        {
            vite--;
            cout << "Numero sbagliato!...Riprova, hai " << vite << " Vite\n";
        }
        if (vite == 0)
        {
            cout << "GAME OVER! Hai " << vite << " Vite";
            return 0;
        }
    }
    cout << "COMPLIMENTI! HAI FINITO IL GIOCO!";

    return 0;
}