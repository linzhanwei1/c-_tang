#include "array.h"
#include <cstdio>

int main(void) {
  Array a1(10);
  Array a2(0);

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

  return 0;
}
