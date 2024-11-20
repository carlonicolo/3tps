#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int myNumbers[] = {1, 2, 3, 4, 5};
    // int i;

    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << " -> ";
        myNumbers[i] = myNumbers[i] * myNumbers[i];
        cout << myNumbers[i] << endl;
    }

    return 0;
}