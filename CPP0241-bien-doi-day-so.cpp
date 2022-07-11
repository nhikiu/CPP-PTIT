#include<bits/stdc++.h>

using namespace std;

int solve(int *a, int n){
  int l = 0, r = n - 1, count = 0;
  while(l <= r){
    if(a[l] == a[r]){
      l++;
      r--;
    }
    else if(a[l] < a[r]){
      l++;
      a[l] = a[l] + a[l - 1];
      count++;
    }
    else {
      r--;
      a[r] = a[r] + a[r + 1];
      count++;
    }
  }
  return count;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << solve(a, n) << endl;
  }
  return 0;
}