#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t, n, x;
  cin >> t;
  while(t--) {
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] == x) cout << i + 1 << " ";
    }
    cout << endl;
  }
}