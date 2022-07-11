#include <bits/stdc++.h>

using namespace std;

int main () {
  int t, x, y, p;
  cin >> t;
  while(t--) {
    cin >> x >> y >> p;
    long long s = 1;
    for (int i = 1; i <= y; i++) {
      s = s * x % p;
    }
    cout << s << endl;
  }
  return 0;
}
