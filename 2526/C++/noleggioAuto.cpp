#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Array delle etichette dei campi
    string etichette[] = {"Marca", "Modello", "Alimentazione", "Cavalli", "Disponibilita"};
    const int numCampi = 5;

    ifstream file("data.txt");
    if (!file.is_open()) {
        cerr << "Errore: impossibile aprire il file data.txt" << endl;
        return 1;
    }

    // Matrice: ogni riga è un'auto, ogni colonna è un campo
    vector<vector<string>> datiAuto;
    vector<string> bloccoCorrente;
    string riga;

    // Lettura del file
    while (getline(file, riga)) {
        // Ignora le righe vuote (separatori tra i blocchi)
        if (riga.empty()) {
            continue;
        }

        bloccoCorrente.push_back(riga);

        // Ogni 5 campi abbiamo un'auto completa: la salviamo
        if (bloccoCorrente.size() == numCampi) {
            datiAuto.push_back(bloccoCorrente);
            bloccoCorrente.clear();
        }
    }
    file.close();

    // Stampa formattata usando l'array di etichette
    cout << "=== Lista Auto ===" << endl << endl;

    for (size_t i = 0; i < datiAuto.size(); i++) {
        cout << "--- Auto n. " << (i + 1) << " ---" << endl;
        for (int j = 0; j < numCampi; j++) {
            cout << etichette[j] << ": " << datiAuto[i][j] << endl;
        }
        cout << endl;
    }

    cout << "Totale auto lette: " << datiAuto.size() << endl;
    return 0;
}