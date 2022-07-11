#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t, n;
  cin >> t;
  while(t--) {
    cin >> n;
    int a[n], min = 1e7, x;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++)
      {
        if (a[j] == a[i]) {
          if (j < min)
          {
            min = j;
          }

        }
      }
    }

    if (min == 1e7) cout << -1 << endl;
    else cout << a[min] << endl;
  }
  return 0;
}
