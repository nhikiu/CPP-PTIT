#include<bits/stdc++.h>

using namespace std;

#define PI 3.141592653589793238

struct ToaDo{
  double x, y;
};

void solve(ToaDo A, ToaDo B, ToaDo C) {
  double a, b, c;
  a = sqrt((C.x - B.x) * (C.x - B.x) + (C.y - B.y) * (C.y - B.y));
  b = sqrt((C.x - A.x) * (C.x - A.x) + (C.y - A.y) * (C.y - A.y));
  c = sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y));
  if (a + b > c && a + c > b && b + c > a) {
    double S = sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b));
    double R = a * b * c / S;
    cout << fixed << setprecision(3) << PI * R * R << endl;
  }
  else cout << "INVALID\n";
}

int main() {
  ToaDo A, B, C;
  int t;
  cin >> t;
  while(t--) {
    cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
    solve(A,B,C);
  }
  return 0;
}