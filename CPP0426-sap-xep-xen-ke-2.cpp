//CPP0426 - sap xep xen ke 2
#include<bits/stdc++.h>
using namespace std;

void solve(int *a, int n){
  sort(a, a + n);
  int k = 0;
  for (int i = 0; i < n; i++){
    cout << a[n - i - 1] << " ";
    k++;
    if(k == n) break;
    cout << a[i] << " ";
    k++;
    if(k == n) break;
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