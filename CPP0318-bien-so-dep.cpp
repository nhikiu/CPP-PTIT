#include<bits/stdc++.h>

using namespace std;

int tang_chat(string a){
  for (int i = 0; i < 4; i++){
    if(a[i] >= a[i + 1]) return 0;
  }
  return 1;
}

int dau_cuoi(string a){
  for(int i = 0; i < 2; i++){
    if(a[i] != a[i + 1]) return 0;
  }
  if(a[3] != a[4]) return 0;
  return 1;
}

int six_eight(string a){
  for(int i = 0; i < 5; i++){
    if(a[i] != '6' && a[i] != '8'){
      return 0;
    }
  }
  return 1;
}

int main(){
  int t;
  cin >> t;
  cin.ignore();
  while(t--){
    string s;
    getline(cin, s);
    int k = 0;
    string a = "";
    for (int i = 5; i <= 12; i++){
      if(s[i] >= '0' && s[i] <= '9'){
        a = a + s[i];
      }
    }

    if(tang_chat(a) || dau_cuoi(a) || six_eight(a)) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}