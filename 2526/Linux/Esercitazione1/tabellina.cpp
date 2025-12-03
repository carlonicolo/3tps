#include<iostream>

using namespace std;

int main(){

    int num, res;

    cout << "Inserisci un numero e ti calcolerò la tabellina corrispondente" << endl;

    cin >> num;

    int i = 0;

    while(i <= 10){
        res = num * i;
        cout << num << " * " << i << " = " << res << endl;
        i++;
    }


    return 0;
}
