#include "array.hpp"
#include <iostream>

using namespace std;

int main(void) {
  Array<int> a1(10);
  Array<int> a2(0);

  if (a1 != a2) {
    printf("a1 != a2\n");
  }

  for (int i = 0; i < a1.length(); i++) {
    a1[i] = i + 1;
  }

  for (int i = 0; i < a1.length(); i++) {
    printf("Element %d: %d\n", i, a1[i]);
  }

  a2 = a1;

  if (a1 == a2) {
    printf("a1 == a2\n");
  }

  for (int i = 0; i < a2.length(); i++) {
    printf("Element %d: %d\n", i, a2[i]);
  }

  Array<double> ad(10);
  for (int i = 0; i < ad.length(); i++) {
    ad[i] = (i + 1) / 100.0;
  }

  for (int i = 0; i < ad.length(); i++) {
    cout << ad[i] << endl;
  }

  return 0;
}
