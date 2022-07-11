//CPP0311 - SẮP ĐẶT XÂU KÝ TỰ - 1
#include<bits/stdc++.h>

using namespace std;

char ki_tu_xuat_hien_max(int a[26]){
  int max = 0;
  char c;
  for(int i = 0; i < 26; i++){
    if(a[i] > max){
      max = a[i];
      c = i + 'a';
    }
  }
  return c;
}

int solve(string s){
  int n = s.length();
  if(n == 0) return 0;
  int mark[26] = {0};
  for(int i = 0; i < n; i++) mark[s[i] - 'a']++;
  char max = ki_tu_xuat_hien_max(mark);
  int dem = mark[max - 'a'];
  if(dem > (n + 1)/2) return 0;
  return 1;
}

int main(){
  int t;
  cin >> t;
  cin.ignore();
  while(t--){
    string s;
    getline(cin, s);
    cout << solve(s) << endl;
  }
  return 0;
}