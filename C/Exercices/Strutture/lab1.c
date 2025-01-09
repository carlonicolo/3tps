#include <stdio.h>

struct Car
{
  char brand[50];
  char model[50];
  int year;
};

struct Person
{
  char firstname[15];
  char lastname[50];
  int age;
};

int main()
{
  struct Car car1 = {"BMW", "X5", 1999};
  struct Car car2 = {"Ford", "Mustang", 1969};
  struct Car car3 = {"Toyota", "Corolla", 2011};
  struct Car wagon = {"BMW", "530", 3000};

  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);
  printf("%s %s %d\n", car3.brand, car3.model, car3.year);
  printf("%s %s %d\n", wagon.brand, wagon.model, wagon.year);

  struct Person p1 = {"Pippo", "Pluto", 30};
  printf("%s %s %d\n", p1.firstname, p1.lastname, p1.age);

  return 0;
}