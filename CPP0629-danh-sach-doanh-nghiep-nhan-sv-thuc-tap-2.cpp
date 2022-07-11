//CPP0629 - DANH SÁCH DOANH NGHIỆP NHẬN SINH VIÊN THỰC TẬP - 2

#include<bits/stdc++.h>
using namespace std;

class Group{
public:
  string id;
  string name;
  int quantily;
public:
  friend istream& operator>>(istream &is, Group &gr){
    getline(is, gr.id);
    getline(is, gr.name);
    is >> gr.quantily;
    return is;
  }
  friend ostream& operator<<(ostream &os, Group &gr){
    os << gr.id << " " << gr.name << " " << gr.quantily << endl;
    return os;
  }
};

void sapxep(Group *ds, int n){
  for(int i = 0; i < n - 1; i++){
    for(int j = i + 1; j < n; j++){
      if(ds[i].quantily < ds[j].quantily) swap(ds[i], ds[j]);
      else if(ds[i].quantily == ds[j].quantily && ds[i].id > ds[j].id) swap(ds[i], ds[j]);
    }
  }
}

int main(){
  int n;
  cin >> n;
  Group ds[1000];
  for(int i = 0; i < n; i++){
    cin.ignore();
    cin >> ds[i];
  }
  sapxep(ds, n);
  int t;
  cin >> t;
  for(int i = 0; i < t; i++){
    int a, b;
    cin >> a >> b;
    cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n";
    for(int j = 0; j < n; j++){
      if(ds[j].quantily >= a && ds[j].quantily <= b){
        cout << ds[j];
      }
    }
  }
  return 0;
}