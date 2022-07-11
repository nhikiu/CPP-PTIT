#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    int *a = new int[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int count = 0;
    if(k < a[0]) cout << 0 << endl;
    else {
      for(int i = 0; i < n; i++){
        for (int j = n - 1; j >= i + 1; j--){
          if(a[i] + a[j] == k) count++;
        }
      }
      cout << count << endl;
    }
  }
  return 0;
}