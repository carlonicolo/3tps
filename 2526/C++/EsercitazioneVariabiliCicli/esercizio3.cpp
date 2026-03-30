// Gioco indovina il numero
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Inizializza il generatore di numeri casuali
    
    int livello, tentativi, maxNumero, numeroSegreto, tentativo;
    int punteggio = 100;
    bool indovinato = false;
    
    cout << "=== INDOVINA IL NUMERO ===\n";
    cout << "Scegli il livello di difficoltà:\n";
    cout << "1. Facile (1-50, 10 tentativi)\n";
    cout << "2. Medio (1-100, 7 tentativi)\n";
    cout << "3. Difficile (1-200, 5 tentativi)\n";
    cout << "Scelta: ";
    cin >> livello;
    
    // Configurazione in base al livello
    switch(livello) {
        case 1:
            maxNumero = 50;
            tentativi = 10;
            break;
        case 2:
            maxNumero = 100;
            tentativi = 7;
            break;
        case 3:
            maxNumero = 200;
            tentativi = 5;
            break;
        default:
            cout << "Livello non valido, uso livello medio.\n";
            maxNumero = 100;
            tentativi = 7;
    }
    
    numeroSegreto = rand() % maxNumero + 1;
    
    cout << "\nHo pensato a un numero tra 1 e " << maxNumero << ".\n";
    cout << "Hai " << tentativi << " tentativi. Inizia!\n\n";
    
    // Ciclo principale del gioco
    for (int i = 1; i <= tentativi; i++) {
        cout << "Tentativo " << i << "/" << tentativi << ". Inserisci un numero: ";
        cin >> tentativo;
        
        if (tentativo == numeroSegreto) {
            cout << "\nCOMPLIMENTI! Hai indovinato il numero " << numeroSegreto << "!\n";
            cout << "Punteggio finale: " << punteggio << "/100\n";
            indovinato = true;
            break;
        } else if (tentativo < numeroSegreto) {
            cout << "Troppo BASSO! ";
        } else {
            cout << "Troppo ALTO! ";
        }
        
        // Fornisci un suggerimento ogni 2 tentativi
        if (i % 2 == 0) {
            if (numeroSegreto % 2 == 0) {
                cout << "(Suggerimento: il numero è pari)";
            } else {
                cout << "(Suggerimento: il numero è dispari)";
            }
        }
        
        cout << endl;
        punteggio -= 100 / tentativi; // Penalità per ogni tentativo
    }
    
    if (!indovinato) {
        cout << "\nMi dispiace, hai esaurito i tentativi!\n";
        cout << "Il numero segreto era: " << numeroSegreto << endl;
        cout << "Punteggio finale: 0/100\n";
    }
    
    return 0;
}