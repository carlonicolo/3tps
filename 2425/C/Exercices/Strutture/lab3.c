#include <stdio.h>
#include <string.h>

// struct with typedef person
typedef struct Person
{
    char name[50];
    int citNo;
    float salary;
} person;

// struct with typedef person
typedef struct Image
{
    char name[20];
    int lenght;
    int width;
} image;

int main()
{

    // create Person variable
    person p1;

    // assign value to name of p1
    strcpy(p1.name, "George Orwell");

    // assign values to other p1 variables
    p1.citNo = 1984;
    p1.salary = 2500;

    // print struct variables
    printf("Name: %s\n", p1.name);
    printf("Citizenship No.: %d\n", p1.citNo);
    printf("Salary: %.2f\n", p1.salary);

    image img1;
    strcpy(img1.name, "Moon.png");
    img1.lenght = 20;
    img1.width = 30;

    printf("\n");

    // print struct variables
    printf("Name: %s\n", img1.name);
    printf("Lenght: %d\n", img1.lenght);
    printf("Width: %d\n", img1.width);

        return 0;
}