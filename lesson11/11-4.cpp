#include <cstdio>

class Test {
  int i;
  int j;
  int k;

  static int c;

public:
  Test(int i, int j, int k) {
    // this->i = i;
    // this->j = j;
    // this->k = k;
    i = i;
    j = j;
    k = k;
  }
  void print(void) {
    printf("Object Address: %p\n", this);
    printf("&c=%p c=%d\n", &c, c);
    printf("&i=%p i=%d\n", &i, i);
    printf("&j=%p j=%d\n", &j, j);
    printf("&k=%p k=%d\n", &k, k);
  }
};

int Test::c;

int main(void) {
  Test t1(0, 1, 2);
  Test t2(3, 4, 5);

  printf("t1 Address: %p\n", &t1);
  t1.print();

  printf("t2 Address: %p\n", &t2);
  t2.print();

  return 0;
}
