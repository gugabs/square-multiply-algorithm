#include <stdio.h>

int square_multiply (int x, int k, int n);

int main (int argc, char *argv[]) {
  int x, k, n;

  scanf("%d %d %d", &x, &k, &n);

  int mod = square_multiply(x, k, n);

  printf("%d\n", mod);

  return 0;
}

int square_multiply (int x, int k, int n) {
  int r = 1;

  while (k > 0) {
    if (k % 2 == 1) r = (r * x) % n;

    k = k >> 1;
    x = (x * x) % n;
  }

  return r;
}
