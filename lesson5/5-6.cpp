#include <cstdio>

int main(void) {
  int i = 0;
  char c = 'c';
  int *pi = &i;
  char *pc = &c;

  c = static_cast<char>(i);
  c = static_cast<char *>(pi);

  return 0;
}
