//CPP0534 - SỐ THUẬN NGHỊCH GIẢM DẦN
#include <bits/stdc++.h>
using namespace std;

struct Number{
  string s;
  int f;
};

bool tn(string s){
  string x = s;
  if(s.length() == 1) return false;
  reverse(s.begin(), s.end());
  if(s == x) return true;
  else return false;
}

bool cmp(Number a, Number b){
  if(a.s.length() > b.s.length()) return true;
  if(a.s.length() < b.s.length()) return false;
  if(a.s.length() == b.s.length()){
    if (a.s > b.s) return true;
  }
  return false;
}

int main(){
  struct Number a[1000];
  string x;
  map<string, int> m;
  while(cin >> x){
    if(tn(x)) m[x]++;
  }
  map<string, int>::iterator it;
  int k = 0;
  for(it = m.begin(); it != m.end(); it++){
    a[k].f = it->second;
    a[k].s = it->first;
    k++;
  }
  sort(a, a + k, cmp);
  for(int i = 0; i < k; i++) cout << a[i].s << " " << a[i].f << endl;
}