//CPP0803 - SỐ KHÁC NHAU TRONG FILE
#include <bits/stdc++.h>
using namespace std;

int main(){
  ifstream input;
  input.open("DATA.in");
  map<int, int> m;
  int a;
  while(input >> a) m[a]++;
  for(auto i : m) cout << i.first << " " << i.second << endl;
  input.close();
}