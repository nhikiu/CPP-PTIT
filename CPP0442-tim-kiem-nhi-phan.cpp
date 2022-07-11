#include<bits/stdc++.h>

using namespace std;

int solve() {
  int n, x;
  cin >> n >> x;
  int a[n];
  for (int i = 0; i < n; i++)  cin >> a[i];
  int left = 0, right = n - 1, mid;
  while (left <= right)
  {
    mid = (left + right) / 2;
    if (x > a[mid]) left = mid + 1;
    else if (x < a[mid]) right = mid - 1;
    else return a[mid];
  }
  return -1;
}

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    if (solve() == -1) cout << -1 << endl;
    else cout << 1 << endl;
  }
  return 0;
}