#include<bits/stdc++.h>

using namespace std;

int solve(string s) {
  int n = s.length(), c[10];
  for (int i = 0; i <= 9; i++) c[i] = 0;
  if(s[0] == '0') return -1;
  else
  {
    for (int i = 0; i < n; i++)
    {
      if(s[i] < '0' || s[i] > '9') return -1;
      else if(s[i] == '0') c[0]++;
      else if(s[i] == '1') c[1]++;
      else if(s[i] == '2') c[2]++;
      else if(s[i] == '3') c[3]++;
      else if(s[i] == '4') c[4]++;
      else if(s[i] == '5') c[5]++;
      else if(s[i] == '6') c[6]++;
      else if(s[i] == '7') c[7]++;
      else if(s[i] == '8') c[8]++;
      else if(s[i] == '9') c[9]++;
    }
    for (int i = 0; i <= 9; i++)  if (c[i] < 1) return 0;
  }
  return 1;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    cin.ignore();
    string s;
    cin >> s;
    if(solve(s) == 1) cout << "YES\n";
    else if (solve(s) == 0) cout << "NO\n";
    else if (solve(s) == -1) cout << "INVALID\n";
  }
  return 0;
}