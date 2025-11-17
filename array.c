#include<stdio.h>

typedef struct {
  int x;
  int y;
} Coordinate;

void structArrPointer() {
  Coordinate arr[3] = {
    {
      .x = 12,
      .y = 13
    },
    {
      .x = 14,
      .y = 15
    },
    {
      .x = 16,
      .y = 17
    }
  };

  Coordinate *arr_ptr = arr;

  printf("Value of coord arr[0]: x -> %d and y -> %d \n", (arr_ptr + 0)->x, (arr_ptr + 0)->y);
  printf("Value of coord arr[1]: x -> %d and y -> %d \n", (arr_ptr + 1)->x, (arr_ptr + 1)->y);
  printf("Value of coord arr[2]: x -> %d and y -> %d \n", (*(arr_ptr + 2)).x, (arr_ptr + 2)->y);

  printf("%p \n", arr + 1);
  printf("%p \n", &arr + 1);
  printf("%p \n", &arr[0] + 1);
}

int main() {
  int arr[5] = {1,2,3,4,5}; // declare an array with fixed size.
  structArrPointer();
  return 0;
}
