#include <stdio.h>
#include "sum.h"

int main() {
    int param1 = 10, param2 = 5;

    printf("Void function -> ");
    sum(param1, param2);
    printf("\n");

    int res = add(param1, param2);
    printf("%d + %d = %d\n", param1, param2, res);

    return 0;
}