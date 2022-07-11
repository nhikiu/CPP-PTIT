//CPP0726 - PHÉP CHIA DƯ CỦA TÍCH HAI SỐ
#include <bits/stdc++.h>
using namespace std;

long long tinh_tich(long long a, long long b, long long c){
  if (b == 0) return 0;
  long long tmp = tinh_tich(a, b/2, c);
  if (b % 2 == 0) return (2 * (tmp % c)) % c;
  else return (a % c + 2 * (tmp % c)) % c;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    long long a, b, c;
    cin >> a >> b >> c;
    cout << tinh_tich(a, b, c) << endl;
  }
}