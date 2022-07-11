//CPP0802 - TÍNH TỔNG
#include <bits/stdc++.h>
using namespace std;

int main(){
  ifstream input;
  input.open("DATA.in");
  long long t = 0;
  while(!input.eof()){
    string s;
    int a = 0, check = 1;
    input >> s;
    if(s.length() <= 9){
      for(int i = 0; i < s.length(); i++){
        if(s[i] <= '9' && s[i] >= '0') a = a * 10 + (s[i] - '0');
        else{
          check = 0;
          break;
        }
      }
    }
    if(check == 1) t += a;
  }
  cout << t;
  input.close();
  return 0;
}