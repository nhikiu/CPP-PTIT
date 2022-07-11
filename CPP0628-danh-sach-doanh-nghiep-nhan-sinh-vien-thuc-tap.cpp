//CPP0628 - DANH SÁCH DOANH NGHIỆP NHẬN SINH VIÊN THỰC TẬP - 1

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
  for(int i = 0; i < n; i++){
    cout << ds[i];
  }
  return 0;
}