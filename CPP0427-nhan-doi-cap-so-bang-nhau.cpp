//CPP0427 - NHÂN ĐÔI CẶP SỐ BẰNG NHAU
#include<bits/stdc++.h>
using namespace std;

void solve(int *a, int n){
  for (int i = 0; i < n - 1; i++){
    if(a[i + 1] != 0 && a[i] == a[i + 1]){
      a[i] = 2 * a[i];
      a[i + 1] = 0;
    }
  }
  int count = 0;
  for (int i = 0; i < n; i++){
    if (a[i] > 0){
      cout << a[i] << " ";
      count++;
    }
  }
  for (int i = 0; i < n - count; i++) cout << 0 << " ";
  cout << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    solve(a, n);
    delete[] a;
  }
  return 0;
}