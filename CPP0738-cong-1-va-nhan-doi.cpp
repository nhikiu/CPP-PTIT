//CPP0738 - CỘNG 1 VÀ NHÂN ĐÔI
#include <bits/stdc++.h>
using namespace std;

void solve(int *a, int n){
  int dem, count = 0, m = 0;
  for(int i = 0; i < n; i++){
    int x = a[i];
    dem = 0;
    while(x > 0){
      if(x % 2 == 0){
        dem++;
        x /= 2;
      }
      else{
        x -= 1;
        count++;
      }
    }
    m = max(dem, m);
  }
  cout << count + m << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    solve(a, n);
  }
}