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

	printf("\n");
	// Declare binary number using bitwise representation
	int binary_num = 0b1010; // This is C99 or GNU extension, will work with some compilers (like GCC)

	// Declare an octal number (prefix 0)
	int octal_num = 012; // Octal 12 (which is 10 in decimal)

	// Declare a hexadecimal number (prefix 0x)
	int hex_num = 0xA; // Hexadecimal A (which is 10 in decimal)

	// Print numbers in different formats
	printf("Binary (0b1010): %d\n", binary_num);								   // Binary printed as decimal
	printf("Octal (012): %o (as octal), %d (as decimal)\n", octal_num, octal_num); // Octal as octal and decimal
	printf("Hexadecimal (0xA): %x (as hex), %d (as decimal)\n", hex_num, hex_num); // Hexadecimal as hex and decimal

	return 0;
}