/**
 * Level of difficulty
 * Easy
 * 
 * Objectives
 * Familiarize the student with:
 * Fixing errors in a program
 * - Integer numbers
 * - Base 8 numbers
 * - Printing on screen
 * 
 * Scenario
 * Check the program in the editor. Find all possible compilation errors and logic errors. Fix them.
 * Your version of the program must print the same result as the expected output.
 * Before you use the compiler, try to find the errors only by manual code analysis.
 * Use octal (base 8) numbers.
 * 
 * Expected output
 *  The value of nine is: 9
 *  The value of ten is: 10
*/

#include <stdio.h>

int main()
{
	// int nine = o09;
	// int nine = 0x1001;
	int ten = 0xA;
	int dieci = 10;
	// printf("The value of nine is: %d \n", nine);
	printf("The value of ten is: %d \n", ten);
	printf("The value of ten is: %X \n", dieci);
	return 0;
}