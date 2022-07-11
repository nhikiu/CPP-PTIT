#include<bits/stdc++.h>

using namespace std;

int main (){
  int t, n, x;
  cin >> t;
  while (t--) {
    cin >> n >> x;
    int a[n], check = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
      if (a[i] == x) {
        check = 1;
        cout << i + 1 << endl;
        break;
      }
    }
    if (check == 0) cout << -1 << endl;
  }
}