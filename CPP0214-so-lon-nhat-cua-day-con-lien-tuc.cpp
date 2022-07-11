//CPP0214 - SỐ LỚN NHẤT CỦA DÃY CON LIÊN TỤC
#include<bits/stdc++.h>
using namespace std;

void solve(int *a, int n, int k){
  int max = -100000, mark = -1;
  for(int i = 0; i < k; i++){
    if(a[i] > max){
      max = a[i];
      mark = i;
    }
  }
  cout << max << " ";
  for(int i = k; i < n; i++){
    if(i - mark < k){
      if(a[i] > max){
        max = a[i];
        mark = i;
        cout << max << " ";
      }
      else cout << max << " ";
    }
    else{
      max = a[++mark];
      for(int j = mark + 1; j <= i; j++){
        if(max < a[j]){
          max = a[j];
          mark = j;
        }
      }
      cout << max << " ";
    }
  }
  cout << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    int *a = new int[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    solve(a, n, k);
    delete[] a;
  }
  return 0;
}