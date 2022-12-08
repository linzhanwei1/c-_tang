#include <cstdio>

int main(void) {
  const int x = 1;
  int &rx = const_cast<int &>(x);

  rx = 5;

  printf("x = %d\n", x);
  printf("rx = %d\n", rx);
  printf("&x = %p\n", &x);
  printf("&rx = %p\n", &rx);

  volatile const int y = 2;
  int *p = NULL;

  p = const_cast<int *>(&y);
  *p = 6;

  printf("y = %d\n", y);
  printf("*p = %d\n", *p);

  const int z = y;
  p = const_cast<int *>(&z);
  printf("z = %d\n", z);
  printf("*p = %d\n", *p);

  char c = 'c';
  char &rc = c;
  const int &trc = c;

  rc = 'a';

  printf("c = %c\n", c);
  printf("rc = %c\n", rc);
  printf("trc = %c\n", trc);

  return 0;
}
