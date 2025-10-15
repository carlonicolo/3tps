#include <stdio.h>

int main()
{
    int c;
    float val;
    int *pc;
    float *ptr_float;

    c = 5;
    val = 5.0;
    
    pc = &c;
    ptr_float = &val;

    c = 1;
    
    printf("%d\n", c);          // Output: 1
    printf("%d\n", *pc);        // Ouptut: 1
    printf("%f\n", *ptr_float); //  5.0
    printf("%p\n", pc);
    
    *pc = 4;
    printf("%d\n", c);

    return 0;
}