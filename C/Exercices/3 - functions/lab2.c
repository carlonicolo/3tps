/**
 * @file lab2.c
 * @author Carlo Nicolò
 * @brief 
 * @version 0.1
 * @date 2024-12-11
 * 
 */

#include <stdio.h>

void calculateSum();
int calculateSumInt();
int calculateSumIntParams(int param1, int param2);

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