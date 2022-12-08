#include <cstdio>
#include <cstring>

int func(int x) { return x; }

int func(int x, int y) { return x + y; }

int func(const char *s) { return strlen(s); }

int main(int argc, char *argv[]) {

  printf("x=%d\n", func(2));
  printf("x+y=%d\n", func(1, 1));
  printf("s=%d\n", func("abcd"));

  return 0;
}
