#include <stdio.h>
#include <stdlib.h>

void allocateInt(int** p2p, int value) {
  int* mem = malloc(1 * sizeof(int));
  *p2p = mem;
  **p2p = value;
}

void swapString(char **str1, char **str2) {

  printf("%c", **str1);
}

void swap(int *a, int *b) {
  printf("%p, %p \n", a, b);
  int temp = *a;
  *a = *b;
  *b = temp;
  printf("%p, %p \n", a, b);
}

int main() {
  int val1 = 100;
  int val2 = 200;
  char* str1 = "Manikandan";
  char* str2 = "Hema";
  printf("Before Swapping => str1: %s, str2: %s \n", str1, str2);
  swapString(&str1, &str2);
  printf("After Swapping => str1: %s, str2: %s \n", str1, str2);
  printf("Before Swapping => val1: %d, val2: %d \n", val1, val2);
  swap(&val1, &val2);
  printf("After Swapping => val1: %d, val2: %d \n", val1, val2);

  int* ptr = NULL;
  allocateInt(&ptr, 10);

  printf("Value of int: %d\n", *ptr);

  free(ptr);
  return 0;
}

// *ptr 0x1 NULL
// **ptr 0x2 0x1
//
// after allocateInt
// *ptr 0x1 0x20(newly allocated memory from malloc)
// **ptr 0x2 0x1
