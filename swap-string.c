#include<stdio.h>

void swapString(char **str1, char **str2) {
  char* temp = *str1;
  *str1 = *str2;
  *str2 = temp;
}


int main() {
  char* str1 = "Manikandan";
  char* str2 = "Hema";
  printf("***********Addresses***********\n");
  printf("Address of str1: %p \n", str1);
  printf("Address of str2: %p \n", str2);
  printf("Address of &str1: %p \n", &str1);
  printf("Address of &str2: %p \n", &str2);

  printf("Before Swapping => str1: %s, str2: %s \n", str1, str2);
  swapString(&str1, &str2);
  printf("After Swapping => str1: %s, str2: %s \n", str1, str2);
}

// explanation
// | variable | memoryAddr | value
// | str1     | 0x1        | 0x10(actual array value of str1, reference to 1st memory addressin that array)
// | str2     | 0x2        | 0x20(actual array value of str2, reference to 1st memory addressin that array)
// so basically when we send &str1 and &str2 to swap function
// that swap function gets 0x1, 0x2 which is the mem address of str1 and str2
// now we only need to swap the memory address of str1 and str2, which inturns swap the actual 
// 1st char value that is pointing
