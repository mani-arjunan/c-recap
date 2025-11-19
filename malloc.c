#include<stdio.h>
#include<stdlib.h>

typedef enum {
  CHAR,
  INT,
} Type;

int* arr_size(int size, Type type) {
  int* memSize;

  switch(type) {
    case CHAR:
      memSize = malloc(size *sizeof(char));
      break;
    case INT:
      memSize = malloc(size *sizeof(int));
      break;
  }

  return memSize;
}



int main() {
  int* char_arr = arr_size(6, CHAR);
  int* int_arr = arr_size(6, INT);

  //populate
  for(int i = 0; i < 6; i++) {
    char_arr[i] = 97 + i;
    int_arr[i] = i;
  }

  //print
  for(int i = 0; i < 6; i++) {
    printf("Char Value: %c \n", char_arr[i]);
    printf("Int Value: %d \n", int_arr[i]);
  }

  free(char_arr);
  free(int_arr);
  return 0;
}
