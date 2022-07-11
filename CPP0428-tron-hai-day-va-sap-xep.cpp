#include<bits/stdc++.h>

using namespace std;

int main() {
  int t, n, m;
  cin >> t;
  while(t--) {
    cin >> n >> m;
    int a[n], b[m], c[m + n], t = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      c[t++] = a[i];
    }
    for (int i = 0; i < m; i++) {
      cin >> b[i];
      c[t++] = b[i];
    }
    sort(c, c + m + n);
    for (int i = 0; i < n + m; i++) {
      cout << c[i] << " ";
    }
    cout << endl;
  }
}