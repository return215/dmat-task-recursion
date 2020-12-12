#include <stdio.h>

int max_array(int n, int *array) {
  if (n <= 1) return array[0];
  int r = array[n - 1];
  int l = max_array(n - 1, array);
  return r > l ? r : l;
}

int main() {
  int n;
  scanf("%d", &n);
  int array[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  printf("%d\n", max_array(n, array));

  return 0;
}
