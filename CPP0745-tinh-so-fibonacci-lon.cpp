//CPP0745 - TÍNH SỐ FIBONACCI LỚN
#include <bits/stdc++.h>
#define MAX 1000000007
using namespace std;

int fibo(int n){
  int f0 = 0, f1 = 1, fn = 0;
  for (int i = 2; i <= n; i++){
    fn = (f0 % MAX) + (f1 % MAX);
    f0 = f1 % MAX;
    f1 = fn % MAX;
  }
  return f1;
}
int main(){
  int t;
  cin >> t;
  while (t--){
    int n;
    cin >> n;
    cout << fibo(n) << endl;
  }
}