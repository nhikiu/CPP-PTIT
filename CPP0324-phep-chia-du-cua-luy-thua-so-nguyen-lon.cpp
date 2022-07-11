// CPP0324 - PHÉP CHIA DƯ CỦA LŨY THỪA SỐ NGUYÊN LỚN
#include<bits/stdc++.h>
using namespace std;

long long tim_so_mu(long long x, long long y, long long p){
  if (y == 0) return 1;
  if (y == 1) return x;
  if (y % 2 == 0) return tim_so_mu(x * x % p, y / 2, p) % p;
  else return x * tim_so_mu(x * x % p, y / 2, p) % p;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    string a;
    long long b, m, res = 0;
    cin >> a >> b >> m;
    for(int i = 0; i < a.length(); i++) res = (res * 10 % m + (a[i] - 48) % m) % m;
    res = tim_so_mu(res, b, m);
    cout << res << endl;
  }
  return 0;
}