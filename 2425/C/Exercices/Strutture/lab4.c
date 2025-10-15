/**
 * Simple programm that shows the use of struct param in functions
 * and how to returns struct from a function
 */

#include <stdio.h>
#include <string.h>

// Define a struct
typedef struct {
    char name[50];
    int age;
    float height;
} Person;

// Function that takes a struct as a parameter
void printPersonInfo(Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f meters\n", p.height);
}

// Function that returns a struct
Person createPerson(const char *name, int age, float height) {
    Person p;
    strncpy(p.name, name, sizeof(p.name) - 1);
    p.name[sizeof(p.name) - 1] = '\0'; // Ensure null-termination
    p.age = age;
    p.height = height;
    return p;
}

int main() {
    // Create a struct using a function
    Person person1 = createPerson("Alice", 30, 1.65);

    // Pass the struct to a function
    printPersonInfo(person1);

    return 0;
}
