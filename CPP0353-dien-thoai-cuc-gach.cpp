#include<bits/stdc++.h>

using namespace std;

bool solve(string s) {
  int n = s.length();
  for (int i = 0; i < n; i++)
  {
    s[i] = tolower(s[i]);
    if (s[i] >= 'a' && s[i] <= 'c') s[i] = '2';
    if (s[i] >= 'd' && s[i] <= 'f') s[i] = '3';
    if (s[i] >= 'g' && s[i] <= 'i') s[i] = '4';
    if (s[i] >= 'j' && s[i] <= 'l') s[i] = '5';
    if (s[i] >= 'm' && s[i] <= 'o') s[i] = '6';
    if (s[i] >= 'p' && s[i] <= 's') s[i] = '7';
    if (s[i] >= 't' && s[i] <= 'v') s[i] = '8';
    if (s[i] >= 'w' && s[i] <= 'z') s[i] = '9';
  }

  string str = "";
  for (int i = n - 1; i >= 0; i--) {
    str.push_back(s[i]);
  }
  if(s.compare(str) == 0) return true;
  return false;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    cin.ignore();
    string s;
    cin >> s;
    if(solve(s)) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}