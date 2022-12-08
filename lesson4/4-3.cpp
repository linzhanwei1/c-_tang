#include <cstdio>
#include <cstring>

int func(int a, int b, int c = 0) { return a + b + c; }

int func(int a, int b) { return a + b; }

int main(void) {
  printf("reustlt=%d\n", func(1, 2, 3));

  return 0;
}
