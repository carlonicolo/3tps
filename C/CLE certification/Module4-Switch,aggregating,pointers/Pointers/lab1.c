#include <stdio.h>

int main()
{
    int *pc, c;
    c = 5;
    pc = &c;
    c = 1;
    printf("%d\n", c);   // Output: 1
    printf("%d\n", *pc); // Ouptut: 1
    printf("%p\n", pc);
    
    *pc = 4;
    printf("%d\n", c); 

    return 0;
}