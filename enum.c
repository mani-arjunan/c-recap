#include<stdio.h>

typedef enum {
  RED = 1,
  BLACK = 2,
  WHITE = 3,
} Color;

typedef struct {
  int size;
  char *name;
  Color color;
} FootballShoe;

typedef enum {
  success=200,
  unauthorized=403,
  unauthenticated=401,
} HTTPSTATUSCODE;

typedef struct {
  HTTPSTATUSCODE statusCode;
} Response;

// typically enums are used in state machines like http status codes, error codes etc,
// like Response.HTTPSTATUSCODE == success

int main() {
  FootballShoe f1 = {
    .color=WHITE,
    .name="Nike",
    .size=9
  };

  printf("%d", f1.color);

  return 0;
}
