#include <stdio.h>
#include<string.h>

// define a structure
struct Person {
  char name[50];
  int age;
  float height;
};

int main() {
  // declare a structure variable
  struct Person soumajit;

  // declare a pointer to the structure
  struct Person *p;

  // initialize the pointer to point to the john structure
  p = &soumajit;

  // set the values of the john structure using the pointer
  strcpy(p->name, "Soumajit");
  p->age = 18;
  p->height = 1.7;

  // print the values of the john structure using the pointer
  printf("Name: %s\n", p->name);
  printf("Age: %d\n", p->age);
  printf("Height: %f\n", p->height);

  return 0;
}

