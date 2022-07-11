#include<bits/stdc++.h>
using namespace std;

void solve(int *a, int n, int k){
  sort(a, a + n);
  cout << a[k - 1] << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    int *a = new int[n];
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }
    solve(a, n, k);
    delete[] a;
  }
  return 0;
}