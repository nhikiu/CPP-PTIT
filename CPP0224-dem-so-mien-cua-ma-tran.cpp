//CPP0224 -  ĐẾM SỐ MIỀN MA TRẬN
#include<bits/stdc++.h>
#define MAX 100;
using namespace std;

bool chuaxet[100][100];
int a[100][100], n, m;
int row[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int col[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int test(int x, int y){
  if (x >= 0 && x < m && y >= 0 && y < n && a[x][y] && chuaxet[x][y]) return true;
  return false;
}

void DFS(int x, int y){
  chuaxet[x][y] = false;
  for(int k = 0; k < 8; k++){
    if (test(x + row[k], y + col[k])) DFS(x + row[k], y + col[k]);
  }
}

int solve(){
  int count = 0;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if (a[i][j] && chuaxet[i][j]){
        DFS(i, j);
        count++;
      }
    }
  }
  return count;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    cin >> m >> n;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        cin >> a[i][j];
        chuaxet[i][j] = true;
      }
    }
    cout << solve() << endl;
  }
}