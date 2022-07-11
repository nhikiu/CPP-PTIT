//CPP0761 - ƯỚC SỐ CHUNG LỚN NHẤT CỦA SỐ NGUYÊN LỚN
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll ucln(string b, ll a){
  int mod = 0;
  for(int i = 0; i < b.length(); i++) mod = (mod * 10 + b[i] - '0') % a;
  return mod;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    ll a;
    string b;
    cin >> a >> b;
    ll b1 = ucln(b, a);
    cout << __gcd(a, b1) << endl;
  }
}