//CPP0221 - QUAY MA TRẬN
#include<bits/stdc++.h>
#define MAX 100
using namespace std;

void solve(int a[MAX][MAX], int h, int c){
  int hang = 0, cot = 0, tmp;
  while(hang < h && cot < c){
    if(hang + 1 == h || cot + 1 == c) break;
    tmp = a[hang + 1][cot];
    for(int i = cot; i < c; i++){
      swap(tmp, a[hang][i]);
    }
    hang++;
    for(int i = hang; i < h; i++){
      swap(a[i][c - 1], tmp);
    }
    c--;
    if(hang < h){
      for(int i = c - 1; i >= cot; i--){
        swap(a[h - 1][i], tmp);
      }
    }
    h--;
    if(cot < c){
      for(int i = h - 1; i >= hang; i--){
        swap(a[i][cot], tmp);
      }
    }
    cot++;
  }
}

void in(int a[MAX][MAX], int h, int c){
  for(int i = 0; i < h; i++){
    for(int j = 0; j < c; j++){
      cout << a[i][j] << " ";
    }
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, m;
    cin >> n >> m;
    int a[MAX][MAX];
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        cin >> a[i][j];
      }
    }
    solve(a, n, m);
    in(a, n, m);
    cout << endl;
  }
  return 0;
}