#include <cstdio>

struct C1 {
  int i;
  int j;
  short k;
  short l;
};

class C2 {
  int i;
  int j;
  short k;
  short l;
};

class C3 {
  int i;
  int j;
  short k;
  short l;

  static int c;

public:
  C3(void) {}
  void print() {}
};

int C3::c;

int main(void) {
  C1 c1;
  C2 c2;
  C3 c3;

  printf("Size of C1:%ld\n", sizeof(c1));
  printf("Size of C2:%ld\n", sizeof(c2));
  printf("Size of C3:%ld\n", sizeof(c3));

  return 0;
}
