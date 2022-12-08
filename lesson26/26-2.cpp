#include <iostream>

using namespace std;

int test(int i) {
  if ((6 <= i) && (i <= 9)) {
    throw i;
  }

  return i;
}

int main(void) {
  try {
    for (int i = 0; i < 10; i++) {
      try {
        cout << test(i) << endl;
      } catch (int e) {
        cout << "Exception: " << e << endl;
        throw e;
      }
    }

  } catch (int e) {
    cout << "Catch: " << e << endl;
  }

  return 0;
}
