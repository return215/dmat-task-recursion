#include <algorithm>
#include <cstdio>
#include <tuple>

using std::get;
using std::make_tuple;
using std::sort;
using std::tuple;

typedef tuple<int, int, int, int> intquad;

intquad mode_rec(int n, int array[]) {
  if (n <= 1) return make_tuple(array[0], 1, array[0], 1);
  auto cur_mode = mode_rec(n - 1, array);
  int mode_n, mode_c, cur_n, cur_c;
  std::tie(mode_n, mode_c, cur_n, cur_c) = cur_mode;
  int n_val = array[n - 1];

  if (cur_n == n_val) {
    cur_c++;
    if (cur_c > mode_c) {
      mode_n = cur_n;
      mode_c = cur_c;
    }
  } else {
    cur_n = n_val;
    cur_c = 1;
  }
  return make_tuple(mode_n, mode_c, cur_n, cur_c);
}

int mode(int n, int array[]) {
  sort(array, array + n);
  return get<0>(mode_rec(n, array));
}

int main() {
  int n;
  scanf("%d", &n);
  int array[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  printf("%d\n", mode(n, array));
  return 0;
}