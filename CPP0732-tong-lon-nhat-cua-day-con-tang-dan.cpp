//CPP0732 - TỔNG LỚN NHẤT CỦA DÃY CON TĂNG DẦN
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = a[0], s[n];
    s[0] = a[0];
    for(int i = 1; i < n; i++){
      s[i] = a[i];
      for(int j = 0; j < i; j++){
        if(a[j] < a[i]) s[i] = max(s[j] + a[i], s[i]);
      }
      ans = max(ans, s[i]);
    }
    cout << ans << endl;
  }
}