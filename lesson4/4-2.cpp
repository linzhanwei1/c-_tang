#include <cstdio>
#include <cstring>

int func(int a, const char *s) { return a; }

int func(const char *s, int a) { return strlen(s); }

int main(int argc, char *argv[]) {
  func(1, "ab");
  return 0;
}
