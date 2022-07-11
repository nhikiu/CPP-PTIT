#include<bits/stdc++.h>

using namespace std;

struct matHang{
  int ma;
  string ten, nhom;
  double mua, ban, lai;
};

int main(){
  matHang a[1000];
  int n;
  cin >> n;

  for (int i = 0; i < n; i++){
    cin.ignore();
    a[i].ma = i + 1;
    getline(cin, a[i].ten);
    getline(cin, a[i].nhom);
    cin >> a[i].mua >> a[i].ban;
    a[i].lai = a[i].ban - a[i].mua;
  }
  for (int i = 0; i < n; i++){
    for (int j = i + 1; j < n; j++){
      if(a[i].lai < a[j].lai) swap(a[i], a[j]);
    }
  }

  for (int i = 0; i < n; i++) {
    cout << a[i].ma << " " << a[i].ten << " " << a[i].nhom << " " << fixed << setprecision(2) << a[i].lai << endl;
  }
  return 0;
}
