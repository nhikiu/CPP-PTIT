#include<bits/stdc++.h>

using namespace std;

void solve() {
  string s;
  cin.ignore();
  cin >> s;
  int n = s.length(), chan = 0, le = 0;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0) chan += s[i] - '0';
    else le += s[i] - '0';
  }
  if ((chan - le) % 11 == 0) cout << 1 << endl;
  else cout << 0 << endl;
}

int main()
{
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}