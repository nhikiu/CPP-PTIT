//CPP0711 - LIỆT KÊ XÂU NHỊ PHÂN
#include<bits/stdc++.h>
using namespace std;

void solve(int n){
  int x[n + 1], i;
  for(int i = 1; i <= n; i++) x[i] = 0;
  while(1){
    for(int i = 1; i <= n; i++) cout << x[i];
    cout << " ";
    i = n;
    while(i > 0 && x[i] == 1){
      x[i] = 0;
      i--;
    }
    if(i == 0){
      cout << endl;
      return;
    }
    else x[i] = 1;
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    solve(n);
  }
  return 0;
}
