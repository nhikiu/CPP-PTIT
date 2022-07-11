//CPP0307 - HIỆU CỦA HAI TẬP TỪ
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  cin.ignore();
  while(t--){
    string s1, s2, token;
    map<string, int> m;
    getline(cin, s1);
    scanf("\n");
    getline(cin, s2);
    stringstream ss(s1);
    while(ss >> token) m[token] = 1;
    stringstream xx(s2);
    while(xx >> token) m[token] = 2;
    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++){
      if(it->second == 1) cout << it->first << " ";
    }
    cout << endl;
  }
}