//CPP0432 - Sap xep theo chu so
#include<bits/stdc++.h>
using namespace std;

int sap_xep(int a, int b){
  return to_string(a) + to_string(b) > to_string(b) + to_string(a);
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, sap_xep);
    for (int i = 0; i < n; i++) cout << a[i];
    cout << endl;
    delete[] a;
  }
  return 0;
}