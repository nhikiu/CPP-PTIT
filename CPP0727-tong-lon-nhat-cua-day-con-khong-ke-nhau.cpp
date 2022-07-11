//CPP0727 - TỔNG LỚN NHẤT CỦA DÃY CON KHÔNG KỀ NHAU
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    long long n;
    cin >> n;
    long long *a = new long long[n], s[n + 1] = {0};
    for(long long i = 0; i < n; i++) cin >> a[i];
    s[0] = a[0];
    s[1] = max(a[0], a[1]);
    for(long long i = 2; i < n; i++) s[i] = max(s[i - 2] + a[i], s[i - 1]);
    cout << s[n - 1] << endl;
    delete[] a;
  }
}