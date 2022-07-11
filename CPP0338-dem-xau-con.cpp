//CPP0338 - ĐẾM XÂU CON
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  cin.ignore();
  while(t--){
    string s;
    int k;
    cin >> s >> k;
    int dem = 0;
    for(int i = 0; i < s.length(); i++){
      map<char, int> m;
      for(int j = i; j < s.length(); j++){
        m[s[j]] = 1;
        if(m.size() == k) dem++;
        if(m.size() > k) break;
      }
    }
    cout << dem << endl;
  }
}