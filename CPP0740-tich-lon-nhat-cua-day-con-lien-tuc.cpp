//CPP0740 - TÍCH LỚN NHẤT CỦA DÃY CON LIÊN TỤC
#include <bits/stdc++.h>
using namespace std;

void solve(int *a, int n){
	long long s = 1, max = LONG_LONG_MIN;
	for(int i = 0; i < n; i++){
    s = 1;
    for(int j = i; j < n; j++){
      s *= a[j];
      if(s > max) max = s;
      if(s == 0) break;
    }
  }
  cout << max << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++) cin >> a[i];
		solve(a, n);
		delete[] a;
  }
}