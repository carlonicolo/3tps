// Semplice programma C++ che conta i caratteri uno per uno,
// senza usare length() o size()

#include <iostream>
#include <string>

using namespace std;

int main() {
    string parola;
    int contatore = 0;

    cout << "Inserisci una parola: ";
    cin >> parola;   // legge una parola (senza spazi)

    // conteggio carattere per carattere
    for (int i = 0; parola[i] != '\0'; i++) {
        contatore++;
    }

    cout << "Numero di caratteri: " << contatore << endl;

    return 0;
}