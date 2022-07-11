//CPP0429 - SỬA ĐÈN
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k, b, x;
  cin >> n >> k >> b;
  vector<int> a(n + 1, 1);
  int sum = k, ans = 0;
  for(int i = 1; i <= b; i++){
    cin >> x;
    if(x <= k) sum--;
    a[x] = 0;
  }
  for(int i = 1, j = k + 1; j <= n; i++, j++){
    if(a[i] == 1) sum--;
    if(a[j] == 1) sum++;
    ans = max(sum, ans);
  }
  if(ans >= k) cout << 0;
  else cout << k - ans;
}