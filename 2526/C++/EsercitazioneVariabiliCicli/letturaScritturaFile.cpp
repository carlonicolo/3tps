#include <iostream>
#include <fstream> // Libreria fondamentale per i file
#include <string>

using namespace std;

int main() {
    string nomeFile = "esempio.txt";

    // 1. SCRITTURA DEL FILE
    ofstream fileScrittura(nomeFile); // Crea e apre il file in scrittura

    if (fileScrittura.is_open()) {
        fileScrittura << "Ciao! Questa è la prima riga." << endl;
        fileScrittura << "Scriviamo anche una seconda riga sul file." << endl;
        fileScrittura.close(); // Chiusura obbligatoria per salvare i dati
        cout << "Scrittura completata con successo!" << endl;
    } else {
        cout << "Errore nell'apertura del file per la scrittura." << endl;
    }

    // 2. LETTURA DEL FILE
    ifstream fileLettura(nomeFile); // Apre il file in lettura

    if (fileLettura.is_open()) {
        string riga;
        cout << "\nContenuto del file:" << endl;
        // Legge il file riga per riga fino alla fine
        while (getline(fileLettura, riga)) {
            cout << riga << endl;
        }
        fileLettura.close(); // Chiudi sempre il file dopo averlo letto
    } else {
        cout << "Errore nell'apertura del file per la lettura." << endl;
    }

    return 0;
}