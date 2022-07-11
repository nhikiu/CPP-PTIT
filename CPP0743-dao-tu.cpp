//CPP0743 - DAO TU
#include<bits/stdc++.h>
using namespace std;

void solve(string s){
  string array[100];
  int k = 0;
  istringstream iss(s);
  while(iss >> array[k]) k++;
  for (int i = k - 1; i >= 0; i--) cout << array[i] << " ";
  cout << endl;
}

int main(){
  int t;
  cin >> t;
  cin.ignore();
  while(t--){
    string s;
    getline(cin, s);
    solve(s);
  }
  return 0;
}