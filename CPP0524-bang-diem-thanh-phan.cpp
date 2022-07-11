#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
  int stt;
  char msv[111];
  string name;
  string lop;
  double d1, d2, d3;
};

void nhap(SinhVien &s){
  cin.ignore();
  fgets(s.msv, 11, stdin);
  cin.ignore();
  getline(cin, s.name);
  getline(cin, s.lop);
  cin >> s.d1 >> s.d2 >> s.d3;
}

void sap_xep(SinhVien ds[], int n){
  for(int i = 0; i < n; i++){
    for (int j = i + 1; j < n; j++){
      if(strcmp(ds[i].msv, ds[j].msv) > 0) swap(ds[i], ds[j]);
    }
  }
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