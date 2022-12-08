#include <iostream>

using namespace std;

void test(int i) {
  if (i == 1) {
    throw -1;
  }
  if (i == 2) {
    throw "ERROR";
  }
  if (i == 3) {
    throw 0.5;
  }
  if (i == 4) {
    throw 'd';
  }
}

int main(void) {
  for (int i = 0; i < 5; i++) {
    try {
      test(i);
    } catch (int e) {
      cout << "int: " << e << endl;
    } catch (const char *e) {
      cout << "const char *" << e << endl;
    } catch (double e) {
      cout << "double " << e << endl;
    } catch (char e) {
      cout << "char: " << e << endl;
    }
  }

  return 0;
}
