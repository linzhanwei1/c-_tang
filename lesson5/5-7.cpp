#include <cstdio>

int main(void) {
  const int &j = 1;
  int &k = const_cast<int &>(j);
  const int x = 2;
  int &y = const_cast<int &>(x);

  k = 5;

  printf("k = %d\n", k);
  printf("j = %d\n", j);

  y = 8;
  printf("x =%d\n", x);
  printf("y = %d\n", y);
  printf("&x = %p\n", &x);
  printf("&y = %p\n", &y);

  return 0;
}
