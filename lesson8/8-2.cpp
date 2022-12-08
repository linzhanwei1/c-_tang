#include <cstdio>

int i = 1;
struct Test {
private:
  int i;

public:
  int j;
  int getI() {
    i = 3;
    return i;
  }
};

int main(void) {
  int i = 2;

  Test test;
  test.j = 4;

  printf("i = %d\n", i);
  printf("::i = %d\n", ::i);
  // printf("test.i = %d\n", test.i);
  printf("test.j = %d\n", test.j);
  printf("test.getI() = %d\n", test.getI());
}
