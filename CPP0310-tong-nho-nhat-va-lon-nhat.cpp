#include<bits/stdc++.h>

using namespace std;

long long replaceNumber(long long n, int a, int b) {
  long long sum = 0, k = 1, du;
  while (n > 0){
    du = n % 10;
    if (du == a) {
      sum = sum + b * k;
    }
    else {
      sum = sum + du * k;
    }
    k *= 10;
    n /= 10;
  }
  return sum;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    long long m, n;
    cin >> m >> n;
    cout << replaceNumber(m,6,5) + replaceNumber(n,6,5) << " " << replaceNumber(m,5,6) + replaceNumber(n,5,6) << endl;
  }
  return 0;
}