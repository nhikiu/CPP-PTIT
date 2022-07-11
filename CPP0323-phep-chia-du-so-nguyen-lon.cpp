//CPP0323 - PHÉP CHIA DƯ CỦA SỐ NGUYÊN LỚN
#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    long long m, sum = 0;
    cin >> m;
    for(int i = 0; i < s.length(); i++){
      sum = sum * 10 + (s[i] - '0');
      sum %= m;
    }
    cout << sum << endl;
  }
  return 0;
}