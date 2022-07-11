#include<bits/stdc++.h>

using namespace std;

int solve(string str) {
  string temp = "";
  int sum = 0, n = str.length(), max = 0;
  for (int i = 0; i < n; i++) {
    if (isdigit(str[i]))
      temp = temp + str[i];
    else {
      char s[20];
      strcpy(s, temp.c_str());
      int k = atoi(s);
      if (k > max) max = k;
      temp = "";
    }
  }
  return max;
}

int main(){
  int t;
  cin >> t;
  while(t--) {
    string s;
    cin.ignore();
    cin >> s;
    cout << solve(s) << endl;
  }
  return 0;
}