#include <cstdio>
#include <cmath>

double ans(int a, int b, int c, double p, double r) {
  double q;

  while (r - p > 1e-7) {
    q = (p + r)/2;

    if (a*q + b*sin(q) > c) {
      r = q;
    } else {
      p = q;
    }
  }
  return p;
}

int main() {
  int t, a, b, c;

  scanf("%d", &t);
  while (t--) {
    scanf("%d %d %d", &a, &b, &c);
    printf("%.6lf\n", ans(a, b, c, 0, c));
  }

  return 0;
}