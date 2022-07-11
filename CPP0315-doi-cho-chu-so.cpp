#include<bits/stdc++.h>

using namespace std;

void solve(string s) {
  int n = s.length();
  bool check = false;
  for (int i = n - 1; i >= 1; i--)
  {
    if (s[i - 1] > s[i])
    {
      swap(s[i - 1], s[i]);
      check = true;
      break;
    }
  }
  if (check) cout << s << endl;
  else cout << -1 << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    cin.ignore();
    string s;
    cin >> s;
    solve(s);
  }
  return 0;
}