//CPP0723 - TÍCH GIAI THỪA CÁC CHỮ SỐ
#include <bits/stdc++.h>
using namespace std;

vector<int> v;

void chuso(int x){
  if (x == 2 || x == 3 || x == 5 || x == 7) v.push_back(x);
  else{
    if(x == 4){
      v.push_back(3);
      for (int i = 0; i < 2; i++) v.push_back(2);
    }
    if(x == 6){
      v.push_back(5);
      v.push_back(3);
    }
    if(x == 8){
      v.push_back(7);
      for(int i = 0; i < 3; i++) v.push_back(2);
    }
    if(x == 9){
      v.push_back(7);
      for(int i = 0; i < 2; i++) v.push_back(3);
      v.push_back(2);
    }
  }
}

void tach(long long a){
  int x;
  while(a > 0){
    x = a % 10;
    if (x > 1) chuso(x);
    a = a / 10;
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    long long a;
    cin >> n >> a;
    tach(a);
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) cout << v[i];
		cout << endl;
    v.clear();
  }
}