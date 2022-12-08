#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void StackUsage(void) {
  cout << "Stack Usage:" << endl;

  stack<double> s;

  for (int i = 0; i < 5; i++) {
    s.push(i * 0.66);
  }
  while (!s.empty()) {
    double v = s.top();
    s.pop();
    cout << v << endl;
  }
}

void QueueUsage(void) {
  cout << "Queue Usage" << endl;

  queue<float> q;
  for (int i = 0; i < 5; i++) {
    q.push(i * 0.66);
  }
  cout << "Elements in q:" << endl;
  while (!q.empty()) {
    float v = q.front();
    q.pop();
    cout << v << endl;
  }
}

int main(void) {
  StackUsage();
  QueueUsage();

  return 0;
}
