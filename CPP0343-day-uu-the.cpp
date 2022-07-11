//CPP0343 - DAY UU THE
#include<bits/stdc++.h>
using namespace std;

int check(string *a, int n){
  int dem_chan = 0, dem_le = 0;
  for (int i = 0; i < n; i++){
    for(int j = 0; j < a[i].length(); j++){
      if(a[i][j] % 2 == 0) dem_chan++;
      else dem_le++;
    }
  }
  if(dem_chan > dem_le && n % 2 == 0) return true;
  else if(dem_le > dem_chan && n % 2 == 1) return true;
  return false;
}

void solve(string s){
  string arr[200];
  int k = 0;
  istringstream iss(s);
  while(iss >> arr[k]) k++;
  if(check(arr, k)) cout << "YES\n";
  else cout << "NO\n";
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