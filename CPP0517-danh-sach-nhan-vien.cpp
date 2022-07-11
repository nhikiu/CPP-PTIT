#include<bits/stdc++.h>

using namespace std;

int ma = 0;

struct NhanVien{
  string ma, name, sex, day, address, maThue, hopDong;
};

string chuyenMa(int &ma){
  string str = to_string(ma + 1);
  while(str.length() < 5){
    str = "0" + str;
  }
  return str;
}

void nhap(NhanVien &s){
  if(ma == 0) cin.ignore();
  s.ma = chuyenMa(ma);
  getline(cin, s.name);
  getline(cin, s.sex);
  getline(cin, s.day);
  getline(cin, s.address);
  getline(cin, s.maThue);
  getline(cin, s.hopDong);
  ma++;
}



void inds(NhanVien ds[], int n){
  for (int i = 0; i < n; i++) {
    cout << ds[i].ma << " " << ds[i].name << " " << ds[i].sex << " " <<ds[i].day << " " << ds[i].address << " " << ds[i].maThue << " " << ds[i].hopDong << endl;
  }
}


int main(){
  struct NhanVien ds[50];
  int N,i;
  cin >> N;
  for(i = 0; i < N; i++) nhap(ds[i]);
  inds(ds,N);
  return 0;
}