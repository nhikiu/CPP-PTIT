//CPP0327 - CHIA HẾT CHO 5
#include<bits/stdc++.h>
using namespace std;

void solve(string s){
  int check = 1, t, sum1 = 0, sum2 = 0;
  int n = s.length();
  if(n % 2 != 0){
    s = "0" + s;
    n = n + 1;
  }
  for(int i = 0; i < n; i += 2){
    string tmp = "";
    tmp = tmp + s[i] + s[i + 1];
    if(tmp == "00") t = 0;
    if(tmp == "01") t = 1;
    if(tmp == "10") t = 2;
    if(tmp == "11") t = 3;
    if(check == 1){
      sum1 += t;
      check = 0;
    }
    else {
      sum2 += t;
      check = 1;
    }
  }
  if((sum1 - sum2) % 5 == 0) cout << "Yes\n";
  else cout << "No\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    solve(s);
  }
  return 0;
}