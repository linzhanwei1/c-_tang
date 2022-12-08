#include <iostream>

using namespace std;

int func1(int i) {
  try {
    if (i > 0) {
      return i;
    } else {
      throw "error";
    }

  } catch (...) {
    return -1;
  }
}

int func2(int i) try {
  if (i > 0) {
    return i;
  } else {
    throw "error";
  }
} catch (...) {
  return -1;
}

int main(void) {

  for (int i = 0; i < 5; i++) {
    cout << func2(i) << endl;
  }

  return 0;
}
