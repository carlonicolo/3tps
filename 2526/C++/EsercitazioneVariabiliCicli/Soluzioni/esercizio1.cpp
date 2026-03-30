#include <iostream>
using namespace std;

int main() {
    int numero, sommaPari = 0, sommaDispari = 0;
    int contaPari = 0, contaDispari = 0;
    
    cout << "=== GESTORE NUMERI PARI E DISPARI ===\n";
    
    // Chiedi all'utente di inserire numeri (0 per terminare)
    do {
        cout << "Inserisci un numero (0 per terminare): ";
        cin >> numero;
        
        if (numero != 0) {
            if (numero % 2 == 0) {
                cout << numero << " è PARI\n";
                sommaPari += numero;
                contaPari++;
            } else {
                cout << numero << " è DISPARI\n";
                sommaDispari += numero;
                contaDispari++;
            }
        }
    } while (numero != 0);
    
    // Calcolo delle medie
    float mediaPari = 0, mediaDispari = 0;
    
    if (contaPari > 0) {
        mediaPari = static_cast<float>(sommaPari) / contaPari;
    }
    
    if (contaDispari > 0) {
        mediaDispari = static_cast<float>(sommaDispari) / contaDispari;
    }
    
    // Output risultati
    cout << "\n=== RISULTATI ===\n";
    cout << "Numeri pari inseriti: " << contaPari << endl;
    cout << "Somma numeri pari: " << sommaPari << endl;
    cout << "Media numeri pari: " << mediaPari << endl;
    
    cout << "\nNumeri dispari inseriti: " << contaDispari << endl;
    cout << "Somma numeri dispari: " << sommaDispari << endl;
    cout << "Media numeri dispari: " << mediaDispari << endl;
    
    return 0;
}