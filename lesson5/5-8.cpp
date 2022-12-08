#include <cstdio>

typedef void(PF)(int);

int main(void) {
  int i = 0;
  char c = 'c';
  int *pi = reinterpret_cast<int *>(&c);
  char *pc = reinterpret_cast<char *>(&i);
  PF *pf = reinterpret_cast<PF *>(0x12345678);

  return 0;
}
