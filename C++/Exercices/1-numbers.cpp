/**
 * Calcolatrice v1
 * Lanciare il programma:
 * 1-numbers [num1] [operatore] [num2]
 *
 * Esempio:
 * 1-numbers.exe 5 * 4
 * Risultato: 20
 */

#include <iostream>
#include <cstdlib> // for atoi
using namespace std;

int main(int argc, char **argv)
{
    if (argc < 4) {
        cout << "Please provide two numbers and an operator." << endl;
        return 1;
    }

    int first_num = atoi(argv[1]);    // Convert first argument to integer
    char op = argv[2][0];             // Extract the first character from the operator argument
    int third_num = atoi(argv[3]);    // Convert third argument to integer

    // Display numbers and operator
    cout << "first_num: " << first_num << endl;
    cout << "operator: " << op << endl;
    cout << "second_num: " << third_num << endl;

    // Perform calculation based on the operator
    switch (op)
    {
    case '*':
        cout << "Result of multiplication: " << first_num * third_num << endl;
        break;
    case '/':
        if (third_num != 0) {
            cout << "Result of division: " << first_num / third_num << endl;
        } else {
            cout << "Error: Division by zero is undefined." << endl;
        }
        break;
    case '+':
        cout << "Result of addition: " << first_num + third_num << endl;
        break;
    case '-':
        cout << "Result of subtraction: " << first_num - third_num << endl;
        break;
    default:
        cout << "Operation currently not supported." << endl;
    }

    return 0;
}
