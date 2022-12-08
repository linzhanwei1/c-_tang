#include <cstdio>
/* 错误的示例 */
typedef void(PF)(int);

struct Point {
  int x;
  int y;
};

int main(void) {
  int v = 12345;
  PF *pf = (PF *)v;
  char c = char(v);

  pf(v);

  Point *p = (Point *)v;

  printf("p->x = %d\n", p->x);
  printf("p->y = %d\n", p->y);

  return 0;
}
