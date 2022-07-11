#include<bits/stdc++.h>

using namespace std;

int solve(int a[], int n, int i) {
  int t = a[i];
  for (int j = 0; j < i; j++) {
    if(a[j] == t) return 0;
  }
  return 1;
}

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  for (int i = 0; i < n; i++)
  {
    if (solve(a, n, i) == 1) cout << a[i] << " ";
  }
  return 0;
}