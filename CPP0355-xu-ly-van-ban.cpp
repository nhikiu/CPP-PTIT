//CPP0355 - XỬ LÝ VĂN BẢN
#include <bits/stdc++.h>
using namespace std;

bool check(string a){
  if(a.find('.') != -1) return true;
  if(a.find('!') != -1) return true;
  if(a.find('?') != -1) return true;
  return false;
}

int main(){
  string a[50000];
  int k = 0;
  while(cin >> a[k]){
    for(int i = 0; i < a[k].length(); i++){
      if (a[k][i] >= 'A' && a[k][i] <= 'Z') a[k][i] += 32;
    }
    k++;
  }
  for(int i = 0; i < k; i++){
    if (i == 0 || check(a[i - 1])) a[i][0] -= 32;
  }
  for(int i = 0; i < k; i++){
    int kt = 1;
    if(check(a[i])){
      kt = 0;
      a[i].erase(a[i].length() - 1, 1);
    }
    cout << a[i] << " ";
    if(kt == 0) cout << endl;
  }
}