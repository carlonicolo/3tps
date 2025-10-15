#include <stdio.h>

int main()
{

    int myNumbers[] = {1, 2, 3, 4, 5};
    // int i;

    for (int i = 0; i < 5; i++)
    {
        printf("%d -> ", myNumbers[i]);
        myNumbers[i] = myNumbers[i] * myNumbers[i];
        printf("%d \n", myNumbers[i]);
    }
}