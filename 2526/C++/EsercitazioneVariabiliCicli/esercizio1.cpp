// Gestore numeri pari e dispari
// Completare l'esercizio utilizzando i costrutti 
// utilizzati nel file template

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
            // Inserisci il codice qui
        }
    } while (); // inserisci la condizione corretta
    
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