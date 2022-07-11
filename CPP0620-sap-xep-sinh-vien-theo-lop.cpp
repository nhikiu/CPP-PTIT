//CPP0620 - SẮP XẾP SINH VIÊN THEO LỚP
#include <bits/stdc++.h>
using namespace std;

class SinhVien{
public:
  string id;
  string name;
  string className;
  string email;
  string year;//Để so sánh các khóa tăng dần D15 -> D16 ->  D17 ...
public:
  SinhVien(){
    id = name = className = email = "";
  }
};

bool sapxeplop(SinhVien a, SinhVien b){
  if(a.className < b.className) return true;
  return false;
}

void solve(SinhVien *ds, int n){
  for(int i = 0; i < n - 1; i++){
    for(int j = i + 1; j < n; j++){
      if(ds[i].year > ds[j].year) swap(ds[i], ds[j]);
      else if(ds[i].year == ds[j].year) {
        if(ds[i].className > ds[j].className) swap(ds[i], ds[j]);
        else if(ds[i].className == ds[j].className){
          if(ds[i].id > ds[j].id) swap(ds[i], ds[j]);
        }
      }
    }
  }
  for(int i = 0; i < n; i++){
    cout << ds[i].id << " " << ds[i].name << " " << ds[i].className << " " << ds[i].email << endl;
  }
}

int main(){
  int n;
  cin >> n;
  cin.ignore();
  SinhVien ds[1000];
  for(int i = 0; i < n; i++) {
    getline(cin, ds[i].id);
    getline(cin, ds[i].name);
    getline(cin, ds[i].className);
    getline(cin, ds[i].email);
    ds[i].year = ds[i].className[1] + ds[i].className[2];
  }
  solve(ds, n);
  return 0;
}
// 4
// B16DCCN011
// Nguyen Trong Duc Anh
// D16CNPM1
// sv1@stu.ptit.edu.vn
// B15DCCN215
// To Ngoc Hieu
// D15CNPM3
// sv2@stu.ptit.edu.vn
// B15DCKT150
// Nguyen Ngoc Son
// D15CQKT02-B
// sv3@stu.ptit.edu.vn
// B15DCKT199
// Nguyen Trong Tung
// D15CQKT03-B
// sv4@stu.ptit.edu.vn