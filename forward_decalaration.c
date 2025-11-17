#include <stdio.h>

typedef struct Node node;

typedef struct Node {
  int value;
  node *next; // u cant define this without the line3, the line3 is known as forward declaration.
} node;

int main() {
  return 1;
}
