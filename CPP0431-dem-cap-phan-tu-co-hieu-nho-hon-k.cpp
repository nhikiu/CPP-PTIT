//CPP0431 - ĐẾM CẶP PHẦN TỬ CÓ HIỆU NHỎ HƠN K
#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    long long n, k, x, d = 0;
    cin >> n >> k;
    vector<int> a;
    vector<int>::iterator it;
    for (int i = 0; i < n; i++){
      cin >> x;
      a.push_back(x);
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n - 1; i++){
      int temp = a[i] + k;
      it = lower_bound(a.begin(), a.end(), temp);
      d += (it - a.begin()) - i - 1;
    }
    cout << d << endl;
  }
}