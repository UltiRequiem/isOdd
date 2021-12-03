#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isOdd(int n) { return n % 2 == 1; }

int main(int argc, char *argv[]) {
  if (argc == 1) {
    printf("Expected more than one argument.\n");
    return 1;
  }

  for (int i = 1; i < argc; i++) {
    printf("%s\n", isOdd(atoi(argv[i])) ? "true" : "false");
  };

  return 0;
}
