#include <stdio.h>

int main()
{

    int *pc, c;
    c = 5;
    pc = &c;
    //*pc = 1;
    printf("%d\n", *pc); // Ouptut: 5

    *pc = 1;
    printf("%d\n", c);   // Output: 1

    return 0;
}