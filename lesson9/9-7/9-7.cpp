#include "array.h"
#include <cstdio>

int main(void) {
  Array a1(10);

  for (int i = 0; i < a1.length(); i++) {
    a1.setData(i, i);
  }

  for (int i = 0; i < a1.length(); i++) {
    printf("Element %d: %d\n", i, a1.getData(i));
  }

  Array a2 = a1;
  for (int i = 0; i < a2.length(); i++) {
    printf("Element %d: %d\n", i, a2.getData(i));
  }

  return 0;
}
