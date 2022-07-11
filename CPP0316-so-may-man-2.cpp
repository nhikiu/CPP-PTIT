//CPP0316 - SỐ MAY MẮN - 2
#include<bits/stdc++.h>
using namespace std;

int tong(int n){
  int s = 0;
  while(n > 0){
    s += n % 10;
    n /= 10;
  }
  if(s >= 10) return tong(s);
  return s;
}

int solve(int *a, int n){
  int sum = 0;
  for(int i = 0; i < n; i++) sum += a[i];
  if(sum >= 10) return tong(sum);
  return sum;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int n = s.length();
    int a[n];
    for(int i = 0; i < n; i++) {
      a[i] = s[i] - '0';
    }
    if(solve(a, n) == 9) cout << 1 << endl;
    else cout << 0 << endl;
  }
  return 0;
}
