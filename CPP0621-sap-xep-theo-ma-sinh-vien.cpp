//CPP0621 - SẮP XẾP THEO MÃ SINH VIÊN

#include<bits/stdc++.h>
using namespace std;

class SinhVien{
public:
  string id;
  string name;
  string className;
  string email;
public:
  friend istream& operator >>(istream &is, SinhVien &sv){
    getline(is, sv.id);
    getline(is, sv.name);
    getline(is, sv.className);
    getline(is, sv.email);
    return is;
  }
  friend ostream& operator<<(ostream &os, SinhVien &sv){
    os << sv.id << " " << sv.name << " " << sv.className << " " << sv.email << endl;
    return os;
  }
};

bool sapxep(SinhVien a, SinhVien b){
  return a.id < b.id;
}

int main(){
  int n = 0;
  SinhVien ds[1000];
  while(cin >> ds[n]){
    n++;
  }
  sort(ds, ds + n, sapxep);
  for(int i = 0; i < n; i++){
    cout << ds[i];
  }
  return 0;
}