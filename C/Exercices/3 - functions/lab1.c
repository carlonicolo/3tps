/**
 * @file lab1.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-12-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdio.h>

// Void function example
// no return!
void calculateSum()
{
    int x = 5;
    int y = 10;
    int sum = x + y;
    printf("The sum of x + y is: %d\n", sum);
}

// int function
int calculateSumInt()
{
    int x = 5;
    int y = 10;
    int sum = x + y;
    //printf("The sum of %d + %d is: %d", x, y, sum);
    return sum;
}

// int function with parameters
int calculateSumIntParams(int first_param, int second_param)
{
    int x = first_param;
    int y = second_param;
    int sum = x + y;
    //printf("The sum of %d + %d is: %d", x, y, sum);
    return sum;
}

int main()
{
    int sumInt;
    int sumParam;
    calculateSum(); // call the function
    
    sumInt = calculateSumInt();
    printf("The result of calculateSumInt() is: %d\n", sumInt);
    
    int param1 = 8;
    int param2 = 4;
    sumParam = calculateSumIntParams(param1, param2);
    printf("The sum of %d + %d is: %d\n", param1, param2, sumParam);
    return 0;
}