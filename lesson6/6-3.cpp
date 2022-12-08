#include <cstdio>

void func(int a, int b) { printf("void  func(int a, int b)\n"); }

void func(int a, char b) { printf("void func(int a, char b)\n"); }

void func(char a, int b) { printf("void func(char a, int b)\n"); }

void func(char a, char b) { printf("void func(char a, char b)\n"); }

int main(void) {
  int a = 1;
  char b = '2';

  func(a, a);
  func(a, b);
  func(b, a);
  func(b, b);

  func(1, 2);
  func(1, '2');
  func('1', 2);
  func('1', '2');

  return 0;
}
