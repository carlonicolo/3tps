#include <iostream>
#include "sum.hpp"
using namespace std;

int main()
{

    // dichiara variabili

    int param1 = 10, param2 = 5;
    //int res_sub;

    cout << "Void function -> ";
    sum(param1, param2);

    cout << "Params int function -> ";
    int res = add(param1, param2);
    cout << param1 << " + " << param2 << " = " << res << endl;

    // cout << "\nSub function -> " << endl;
    
    /*
    res_sub = sub(param1, param2);
    cout << res_sub << endl;
    res_sub = sub(param2, param1);
    */

    return 0;
}