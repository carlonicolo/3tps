#include <iostream>
using namespace std;

int main()
{

    int tabellina;
    int res;

    cout << "-------------------- TASK 1 ------------------" << endl;

    // TASK 1
    /**
     * Crea un programma che prende in ingresso un valore numerico e calcola la tabellina
     * Esempio 3
     * 3*0 = 0
     * 3*1 = 3
     * ...
     */
    cout << "Inserisci un valore" << endl;
    cin >> tabellina;

    for (int i = 0; i <= 20; i++)
    {
        res = tabellina * i;
        cout << tabellina << " * " << i << " = " << res << endl;
    }

    cout << "--------------------------------------------" << endl;
    cout << endl;

    cout << "-------------------- TASK 2 ------------------" << endl;
    // Task 2
    for (int i = 0; i <= 20; i = i + 4)
    {
        cout << "i = " << i << std::endl;
    }
    cout << "--------------------------------------------" << endl;
    cout << endl;

    cout << "-------------------- TASK 3 ------------------" << endl;
    // Task 3
    /**
     * Crea un menù che da la possibilità di calcolare la somma ed il prodotto di due numeri
     * ------
     * Output
     * Inserisci primo : 5
     * Inserisci secondo numero: 6
     * Menù
     * - 1 somma
     * - 2 prodotto
     * - 3 continua
     * - 4 esci
     * 1
     * 
     * La somma di 5 + 6 = 11
     */

    for (int i = 0; i <= 20; i = i + 4)
    {
        cout << "i = " << i << std::endl;
    }
    cout << "--------------------------------------------" << endl;
    cout << endl;

    return 0;
}

/*
# 1




# 2
Utilizza il valore inserito crea un ciclo che multiplica per 4 il valore

# 3
Crea un menù che da la possibilità di calcolare la somma ed il prodotto di due numeri

------
Output
Inserisci primo : 5
Inserisci secondo numero: 6

Menù
- 1 somma
- 2 prodotto

1

La somma di 5 + 6 = 11

------------------------------------
*/