#include<stdio.h>
#include<string.h>

int totalMarks(int sub1, int sub2) {
  return sub1 + sub2;
}

// a simple function of return type *char which returns a string.
char *getFullName(char *firstName,char *lastName) {
  return strcat(firstName, lastName);
}

int main() {
  int age = 21;
  char firstLetter = 'A'; // single quotes to char
  float mark = 96.1;
  const int birthYear = 1996; // constant, am amazed that i found a wonderful example for the right use case..hmmmm!
  char *fullName = "Manikandan Arjunan"; // double quotes to string
  printf("Hello World!! \n"); // Just print hello world, thats what we do right.
  printf("Age: %d \n", age);
  printf("BirthYear: %d \n", birthYear);
  printf("Mark: %f \n", mark);
  printf("FirstLetter: %c \n", firstLetter);
  printf("FullName: %s \n", fullName);


  /*---------------------------------------*/

  int math = 1;
  int physics = 1;

  int marks = totalMarks(math, physics);
  printf("Total Marks: %d", marks);

  char *firstName = "Manikandan";
  char *lastName = "Arjunan";

  char *fN = getFullName(firstName, lastName);
  printf("FullName: %s", fN);

  return 0;
}
