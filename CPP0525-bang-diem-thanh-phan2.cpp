#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
  int stt;
  string msv;
  string name;
  string lop;
  double d1, d2, d3;
};

void nhap(SinhVien &s){
  cin.ignore();
  getline(cin, s.msv);
  getline(cin, s.name);
  getline(cin, s.lop);
  cin >> s.d1 >> s.d2 >> s.d3;
}

int sap_xep_name(SinhVien a, SinhVien b){
  return a.name < b.name;
}

void sap_xep(SinhVien *ds, int n){
  sort(ds, ds + n, sap_xep_name);
}

void in_ds(SinhVien ds[], int n){
  for (int i = 0; i < n; i++) {
    cout << i + 1 << " " << ds[i].msv << " " << ds[i].name << " " <<ds[i].lop << " " << fixed << setprecision(1) << ds[i].d1 << " " << ds[i].d2 << " " << ds[i].d3 << endl;
  }
}


int main(){
  int n;
  cin >> n;
  struct SinhVien *ds = new SinhVien[n];
  for(int i = 0; i < n; i++) {
    nhap(ds[i]);
	}
	sap_xep(ds, n);
  in_ds(ds,n);
  return 0;
}

// 3
// Nguyen Van A
// Nam
// 10/22/1982
// Mo Lao-Ha Dong-Ha Noi
// 8333012345
// 31/12/2013
// Ly Thi B
// Nu
// 10/15/1988
// Mo Lao-Ha Dong-Ha Noi
// 8333012346
// 22/08/2011
// Hoang Thi C
// Nu
// 04/02/1981
// Mo Lao-Ha Dong-Ha Noi
// 8333012347
// 22/08/2011