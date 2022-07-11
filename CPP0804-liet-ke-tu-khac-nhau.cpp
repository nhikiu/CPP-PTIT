//CPP0804 - LIỆT KÊ TỪ KHÁC NHAU
#include <bits/stdc++.h>
using namespace std;

int main(){
  ifstream in;
  in.open("VANBAN.in");
  string s;
  map<string, int> m;
  while(in >> s){
    for(int i = 0; i < s.length(); i++){
      if(s[i] <= 'Z' && s[i] >= 'A') s[i] += 32;
    }
    m[s]++;
  }
  for(auto i : m) cout << i.first << endl;
}