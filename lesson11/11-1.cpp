#include <cstdio>

class Test {
private:
  static int cI;

public:
  static int getI(void) { return cI; }
  static void setI(int i) { cI = i; }
  void print(void) { printf("cI = %d\n", cI); }
};

int Test::cI = 0;

int main(void) {
  Test::setI(5);

  printf("cI = %d\n", Test::getI());

  Test t1;
  Test t2;

  t1.setI(10);
  t1.print();
  t2.print();

  return 0;
}
