// WTP to print harmonic series.
#include <stdio.h>

int main() {
  int n, i;
  float sum = 0.0;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    sum = sum + (float) 1 / i;
  }

  printf("Sum of the first %d terms of the harmonic series: %f\n", n, sum);
  return 0;
}