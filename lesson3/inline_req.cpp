#include <cstdio>

inline int f_inline(int a, int b) __attribute__((always_inline));
// inline int f_inline(int a, int b);
int g_no_inline(int a, int b);

int main(int argc, char *argv[]) {
  int r1 = f_inline(1, 2);
  int r2 = g_no_inline(1, 2);

  return 0;
}

int f_inline(int a, int b) { return a < b ? a : b; }

int g_no_inline(int a, int b) { return a < b ? a : b; }
