#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    string s[n];
    int b[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

    for (int i = 0; i < n; i++){
      cin >> s[i];
    }
    for (int i = 0; i < n; i++){
      for (int j = 0; j < s[i].length(); j++){
        b[s[i][j] - '0'] = s[i][j] - '0';
      }
    }
    for (int i = 0; i < 10; i++){
      if(b[i] >= 0) cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}