#include <iostream>
using namespace std;

int main() {
    int scelta;
    double num1, num2, risultato;
    bool continua = true;
    
    while (continua) {
        cout << "\n=== CALCOLATRICE AVANZATA ===\n";
        cout << "1. Addizione\n";
        cout << "2. Sottrazione\n";
        cout << "3. Moltiplicazione\n";
        cout << "4. Divisione\n";
        cout << "5. Potenza\n";
        cout << "6. Fattoriale\n";
        cout << "0. Esci\n";
        cout << "Scegli un'operazione: ";
        cin >> scelta;
        
        switch(scelta) {
            case 0:
                continua = false;
                cout << "Arrivederci!\n";
                break;
                
            case 1: // Addizione
                cout << "Inserisci primo numero: ";
                cin >> num1;
                cout << "Inserisci secondo numero: ";
                cin >> num2;
                risultato = num1 + num2;
                cout << "Risultato: " << num1 << " + " << num2 << " = " << risultato << endl;
                break;
                
            case 2: // Sottrazione
                cout << "Inserisci primo numero: ";
                cin >> num1;
                cout << "Inserisci secondo numero: ";
                cin >> num2;
                risultato = num1 - num2;
                cout << "Risultato: " << num1 << " - " << num2 << " = " << risultato << endl;
                break;
                
            case 3: // Moltiplicazione
                cout << "Inserisci primo numero: ";
                cin >> num1;
                cout << "Inserisci secondo numero: ";
                cin >> num2;
                risultato = num1 * num2;
                cout << "Risultato: " << num1 << " * " << num2 << " = " << risultato << endl;
                break;
                
            case 4: // Divisione
                cout << "Inserisci dividendo: ";
                cin >> num1;
                cout << "Inserisci divisore: ";
                cin >> num2;
                if (num2 != 0) {
                    risultato = num1 / num2;
                    cout << "Risultato: " << num1 << " / " << num2 << " = " << risultato << endl;
                } else {
                    cout << "Errore: divisione per zero!\n";
                }
                break;
                
            case 5: // Potenza
                cout << "Inserisci base: ";
                cin >> num1;
                cout << "Inserisci esponente (intero positivo): ";
                cin >> num2;
                risultato = 1;
                for (int i = 0; i < num2; i++) {
                    risultato *= num1;
                }
                cout << "Risultato: " << num1 << "^" << num2 << " = " << risultato << endl;
                break;
                
            case 6: // Fattoriale
                cout << "Inserisci numero (0-20): ";
                cin >> num1;
                if (num1 >= 0 && num1 <= 20) {
                    risultato = 1;
                    for (int i = 2; i <= num1; i++) {
                        risultato *= i;
                    }
                    cout << "Fattoriale di " << num1 << " = " << risultato << endl;
                } else {
                    cout << "Numero non valido!\n";
                }
                break;
                
            default:
                cout << "Scelta non valida!\n";
        }
    }
    
    return 0;
}