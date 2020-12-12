#include <stdio.h>

int gcd(int a, int b) {
  if (b == 0) return a;
  if (a > b) return gcd(b, a);
  return gcd(a, b - a);
}

int main(int argc, char const *argv[]) {
  /* code */
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", gcd(a, b));
  return 0;
}
