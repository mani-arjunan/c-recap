#include<stdio.h>

typedef struct {
  int x;
  int y;
}Coordinate;

void normalStructAccess(Coordinate coord) {
  printf("Coordinate X value: %d \n", coord.x);
  printf("Coordinate Y value: %d \n", coord.y);
}

void ptrStructAccess(Coordinate *coord) {
  // when struct is pointer variable, access members using -> operator.
  // or (*).
  printf("Coordinate X value: %d \n", coord->x);
  printf("Coordinate Y value: %d \n", (*coord).y);
}

void structExample(Coordinate coord) {
  Coordinate *ptr_coord = &coord;

  printf("Address of our struct Coordinate: %p \n", ptr_coord);
  printf("Address of our struct Coordinate ptr variable: %p \n", &ptr_coord);
}

int main() {
  int x = 10;
  int y = x; // even though here we are pointing x to y, the actual value of x will be copied to y;
  x = 11; // only x will be changed y will be remain unchanged.

  printf("Value of x: %d and Value of y: %d \n", x, y);

  int *xPtr = &x; // this holds the memory address of value x;
  printf("value of x %d \n", *xPtr);
  printf("value of x address %p \n", xPtr);
  printf("value of xPtr address %p \n", &xPtr);

  *xPtr = 14; // this will change the x value as well.

  printf("x value after changed from *xPtr: %d \n", x);

  Coordinate coord = {
    .x = 100,
    .y = 10
  };

  normalStructAccess(coord);
  ptrStructAccess(&coord);
  structExample(coord);

  return 0;
}
