//CPP0713 - LIỆT KÊ HOÁN VỊ
#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int n){
  while(1){
    int i;
    for (i = 1; i <= n; i++) cout << a[i];
    cout << " ";
    i = n - 1;
    while (i > 0 && a[i] > a[i + 1]) i--;
    if (i == 0) return;
    int k = n;
    while (a[k] < a[i]) k--;
    swap(a[k], a[i]);
    int l = i + 1, r = n;
    while(l < r) {
      swap(a[l], a[r]);
      l++;
      r--;
    }
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int s[100];
    for (int i = 1; i <= n; i++) s[i] = i;
    solve(s, n);
    cout << endl;
  }
  return 0;
}