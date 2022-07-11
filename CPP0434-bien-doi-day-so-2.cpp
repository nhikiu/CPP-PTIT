#include<bits/stdc++.h>
using namespace std;

void solve(int *a, int n){
  for (int i = 0; i < n; i++){
    if(i == 0) cout << a[0] * a[1] << " ";
    else if (i == n - 1) cout << a[n - 1] * a[n - 2] << " ";
    else cout << a[i + 1] * a[i - 1] << " ";
  }
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