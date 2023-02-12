// WTP to print the pattern 
// 1
// 1 2
// 1 2 3
#include <stdio.h>

int main() {
  int i, j;

  for (i = 1; i <= 3; i++) {
    for (j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}
