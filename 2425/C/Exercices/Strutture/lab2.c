#include <stdio.h>
#include <string.h>

// create struct with person1 variable
struct Person
{
    char name[50];
    int citNo;
    float salary;
} person1;

int main()
{
    struct Person person2;
    
    // assign value to name of person1
    strcpy(person1.name, "George Orwell");

    // assign values to other person1 variables
    person1.citNo = 1984;
    person1.salary = 2500;

    // print struct variables
    printf("Name: %s\n", person1.name);
    printf("Citizenship No.: %d\n", person1.citNo);
    printf("Salary: %.2f", person1.salary);

    printf("\n---------- person2 --------\n");
    // assign value to name of person1
    strcpy(person2.name, "James Brown");

    // assign values to other person1 variables
    person2.citNo = 1990;
    person2.salary = 300000;

    // print struct variables
    printf("Name: %s\n", person2.name);
    printf("Citizenship No.: %d\n", person2.citNo);
    printf("Salary: %.2f", person2.salary);

    return 0;
}