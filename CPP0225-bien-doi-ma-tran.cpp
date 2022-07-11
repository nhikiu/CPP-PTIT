//CPP0225 - BIẾN ĐỔI MA TRẬN
#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int a[n][n], hang[n] = {0}, cot[n] = {0};
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        cin >> a[i][j];
        hang[i] += a[i][j];
        cot[j] += a[i][j];
      }
    }
    int tmp = 0, count = 0;
    for(int i = 0; i < n; i++){
      tmp = max(tmp, hang[i]);
      tmp = max(tmp, cot[i]);
    }
    for(int i = 0; i < n; i++) count += tmp - hang[i];
    cout << count << endl;
  }
}