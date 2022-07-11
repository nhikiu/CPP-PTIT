//CPP0321 - HIỆU HAI SỐ NGUYÊN LỚN
#include<bits/stdc++.h>
using namespace std;

void solve(string a, string b){
  int nho = 0;
  string result[1000];
  for(int i = a.length() - 1; i >= 0; i--){
    int A = a[i] - '0';
    int B = b[i] - '0';
    A = A - nho;
    if(A < B){
      result[i] = to_string(A + 10 - B);
      nho = 1;
    }
    else{
      nho = 0;
      result[i] = to_string(A - B);
    }
  }
  for(int i = 0; i < a.length(); i++) cout << result[i];
}

int main(){
  int t;
  cin >> t;
  while(t--){
    string a, b;
    cin >> a >> b;
    while(b.length() < a.length()) b = "0" + b;
    while(a.length() < b.length()) a = "0" + a;
    if(a < b) swap(a, b);
    solve(a, b);
    cout << endl;
  }
  return 0;
}
