#include<stdio.h>

struct Employee {
  char *name;
  int age;
  int exp;
};

/**
 * You can also use typedef to define ur struct a name, so that in each places
 * u can use Employee emp1 = {} instead of struct Employee etc
*/

// typedef struct {
//   char *name;
//   int age;
//   int exp;
// } Employee;

void printStruct(struct Employee emp) {
  printf("Name of the Employee :%s\n", emp.name);
  printf("Age of the Employee :%d\n", emp.age);
  printf("Name of the Employee :%d\n", emp.exp);
}

void structBasics() {
  struct Employee emp1 = {
    .name = "Manikandan",
    .age = 30,
    .exp = 5
  };
  struct Employee emp2 = {
    .name = "Hema",
    .age = 29,
    .exp = 4
  };

  printStruct(emp1);
  printStruct(emp2);
}

int main() {
  structBasics();
  return 0;
}
