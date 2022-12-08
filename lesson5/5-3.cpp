#include <cstdio>

namespace First {
int i = 0;
}

namespace Second {
int i = 1;
namespace Internal {
struct P {
  int x;
  int y;
};
} // namespace Internal
} // namespace Second

int main(void) {
  using namespace First;
  using Second::Internal::P;

  printf("i = %d\n", i);
  printf("i = %d\n", Second::i);

  P p = {2, 3};

  printf("p.x=%d\n", p.x);
  printf("p.y=%d\n", p.y);

  return 0;
}
