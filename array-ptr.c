#include<stdio.h>
#include<stdlib.h>

int main() {
  char** arr_ptr = malloc(sizeof(char*) * 3);
  arr_ptr[0] = "Manikandan";
  arr_ptr[1] = "Arjunan";
  arr_ptr[2] = "k";

  char* str = "Manikandan";

  printf("%s\n", *arr_ptr);
  printf("%d", *(str + 1));

  return 0;
}
