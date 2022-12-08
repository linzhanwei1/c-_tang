#include <iostream>

using namespace std;

class Shape {
public:
  virtual double area(void) = 0;
};

class Rectangle : public Shape {
  double m_a;
  double m_b;

public:
  Rectangle(int a, int b) {
    m_a = a;
    m_b = b;
  }
  double area(void) { return m_a * m_b; }
};

class Circle : public Shape {
  double m_r;

public:
  Circle(double r) { m_r = r; }
  double area(void) { return 3.14 * m_r * m_r; }
};

void area(Shape *s) { cout << s->area() << endl; }

int main(void) {
  Rectangle rect(2, 3);
  Circle circle(4);

  area(&rect);
  area(&circle);

  return 0;
}
