/**
 * Uso degli array e cicli
 */

#include <stdio.h>

int main()
{
    char greetings[] = "Hello World!";
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%s\n", greetings);
    printf("%d\n", numbers[0]);

    // TASK 1
    // Ciclo for o while per stampare
    // i valori contenuti negli array dalla posizione
    // più piccola alla più grande e viceversa

    // HINT
    /**
     * the sizeof operator returns the size of a type in bytes.
     * 
     * You learned from the Data Types chapter that an int type is usually 4 bytes, 
     * so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.
     * Knowing the memory size of an array is great when you are working with
     * larger programs that require good memory management.
     * But when you just want to find out how many elements an array has,
     * you can use the following formula (which divides the size of the array
     * by the size of the first element in the array):
     */
    // int myNumbers[] = {10, 25, 50, 75, 100};
    // int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    // printf("%d", length);  // Prints 5

    return 0;
}