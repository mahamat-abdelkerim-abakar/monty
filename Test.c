#include <stdio.h>
#include <stdlib.h>

int main() {
  int stack[100];
  int top = -1;
  char *opcode;
  while (scanf("%s", opcode) != EOF) {
    if (strcmp(opcode, "push") == 0) {
      int value;
      scanf("%d", &value);
      stack[++top] = value;
    } else if (strcmp(opcode, "pop") == 0) {
      top--;
    } else if (strcmp(opcode, "add") == 0) {
      stack[top] += stack[top - 1];
      top--;
    } else if (strcmp(opcode, "sub") == 0) {
      stack[top] -= stack[top - 1];
      top--;
    } else if (strcmp(opcode, "mul") == 0) {
      stack[top] *= stack[top - 1];
      top--;
    } else if (strcmp(opcode, "div") == 0) {
      stack[top] /= stack[top - 1];
      top--;
    } else if (strcmp(opcode, "pall") == 0) {
      for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
      }
      printf("\n");
    } else {
      printf("Unknown opcode: %s\n", opcode);
    }
  }
  return 0;
}
//monty1l5
//datatm///
