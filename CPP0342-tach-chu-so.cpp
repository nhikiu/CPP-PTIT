//CPP0342 - TÁCH CHỮ SỐ
#include<bits/stdc++.h>
using namespace std;

void solve(string s){
  int n = s.length();
  char a[n];
  for(int i = 0; i < n; i++){
    a[i] = s[i];
  }
  sort(a, a + n);
  int sum = 0;
  for(int i = 0; i < n; i++){
    if(a[i] >= '0' && a[i] <= '9'){
      sum = sum + (a[i] - '0');
    }
    else cout << a[i];
  }
  cout << sum << endl;
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