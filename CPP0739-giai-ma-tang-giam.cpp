//CPP0739 - GIẢI MÃ TĂNG GIẢM
#include <bits/stdc++.h>
using namespace std;

void solve(string s){
  vector<int> ans;
  stack<int> a;
  for(int i = 0; i <= s.length(); i++){
    a.push(i + 1);
    if (i == s.length() || s[i] == 'I'){
      while(!a.empty()){
        ans.push_back(a.top());
        a.pop();
      }
    }
  }
  for (int i = 0; i < ans.size(); i++) cout << ans[i];
  cout << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    solve(s);
  }
}