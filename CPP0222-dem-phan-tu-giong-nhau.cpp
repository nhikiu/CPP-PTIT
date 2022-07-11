//CPP0222 - ĐẾM PHẦN TỬ GIỐNG NHAU
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, dem = 0;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        cin >> a[i][j];
      }
    }
    for(int i = 0; i < n; i++) sort(a[i], a[i] + n);
    map<int, int> m;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(j == 0 || a[i][j] != a[i][j - 1]) m[a[i][j]]++;
      }
    }
    map<int, int>::iterator i;
    for(i = m.begin(); i != m.end(); i++){
      if (i->second == n) dem++;
    }
    cout << dem << endl;
  }
}