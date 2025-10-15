/**
 * @file main.c
 * @author Carlo Nicolò 
 * @brief 
 * @version 0.1
 * @date 2024-12-12
 * 
 */

#include <stdio.h>
#include "sum.h"
#include "sub.h"

int main() {
    int param1 = 10, param2 = 5;
    int res_sub;

    printf("Void function -> ");
    sum(param1, param2);
    printf("\n");

    int res = add(param1, param2);
    printf("%d + %d = %d\n", param1, param2, res);

    printf("\nSub function -> ");
    
    res_sub = sub(param1, param2);
    printf("%d\n", res_sub);
    res_sub = sub(param2, param1);

    return 0;
}