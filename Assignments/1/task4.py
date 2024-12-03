#include <iostream>
using namespace std;
int main()
{
    float a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int somma = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < 0)
        {
            somma = somma + a[i];
            a[i] = 0;
        }
    }
    cout << "somma " << somma << endl;
    cout << "contenuto array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
}