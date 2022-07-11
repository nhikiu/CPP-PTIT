//CPP0805 - HỢP VÀ GIAO CỦA HAI FILE VĂN BẢN
#include <bits/stdc++.h>
using namespace std;

int main(){
  ifstream in;
  in.open("DATA1.in");
  string s;
  map<string, int> uni, res;
  while(in >> s){
    for(int i = 0; i < s.length(); i++){
      if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    uni[s] = 1;
  }
  in.close();
  in.open("DATA2.in");
  while(in >> s){
    for(int i = 0; i < s.length(); i++){
       if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    res[s] = 1;
  }
  in.close();
  for(auto i : res) uni[i.first]++;
  for(auto i : uni) cout << i.first << " ";
  cout << endl;
  for(auto i : uni){
    if(i.second > 1) cout << i.first << " ";
  }
  cout << endl;
}