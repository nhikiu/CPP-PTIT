//CPP0314 - CHUC MUNG NAM MOI
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  cin.ignore();
  string s[n];
  int mark[n], count = 0;
  for (int i = 0; i < n; i++){
    getline(cin, s[i]);
    mark[i] = 1;
  }
  for (int i = 0; i < n - 1; i++){
    if(mark[i] == 1){
      for (int j = i + 1; j < n; j++){
        if(mark[j] == 1 && s[i] == s[j]) mark[j] = 0;
      }
    }
  }
  for (int i = 0; i < n; i++){
    if(mark[i] == 1) count++;
  }
  cout << count;
  return 0;
}