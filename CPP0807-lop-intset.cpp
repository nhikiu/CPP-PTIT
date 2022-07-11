//CPP0807 - LỚP INTSET
#include <bits/stdc++.h>
using namespace std;

int main(){
  ifstream in;
  in.open("DATA.in");
  int s, a, b;
  map<int, int> m, n;
  in >> a >> b;
  for(int i = 0; i < a; i++){
    in >> s;
    m[s] = 1;
  }
  for(int i = 0; i < b; i++){
    in >> s;
    n[s] = 1;
  }
  for(auto i : n) m[i.first]++;
  for(auto i : m){
    if (i.second > 1) cout << i.first << " ";
  }
  cout << endl;
}