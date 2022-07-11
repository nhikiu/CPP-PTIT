#include<bits/stdc++.h>

using namespace std;

struct Information{
  int gio, phut, giay, tong;
};

int main() {
  struct Information a[5005];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i].gio >> a[i].phut >> a[i].giay;
  }
  for(int i = 0; i < n; i++){
    a[i].tong = a[i].gio * 3600 + a[i].phut * 60 + a[i].giay;
  }
  for (int i = 0; i < n; i++){
    for (int j = i + 1; j < n; j++){
      if (a[i].tong > a[j].tong) swap(a[i], a[j]);
    }
  }
  for (int i = 0; i < n; i++){
    cout << a[i].gio << " " << a[i].phut << " " << a[i].giay << endl;
  }
  return 0;
}