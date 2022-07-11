#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string id, name, sex, birthday, address, ma_thue, contract, ngay_sinh_chuan_hoa;
};

int k = 1;

//chuyen ma sinh vien
string chuyen_ma(int n){
	string s = to_string(n);
  while(s.length() < 5) s = "0" + s;
  return s;
}

//chuan hoa ngay thang nam sinh
string ngay_sinh(string s){
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '/') s[i] = ' ';
  }
  string arr[100];
  int x = 0;
  istringstream iss(s);
  while(iss >> arr[x]) x++;
  // for (int i = 0; i < x; i++){
  //   if (arr[i].length() < 2) arr[i] = "0" + arr[i];
  // }
  string day = "";
  day = arr[2] + arr[0] + arr[1];
  return day;
}

//nhap danh sach n sinh vien
void nhap(NhanVien &sv){
  if (k == 1) cin.ignore();
  sv.id = chuyen_ma(k);
  getline(cin, sv.name);
  getline(cin, sv.sex);
  getline(cin, sv.birthday);
  sv.ngay_sinh_chuan_hoa = ngay_sinh(sv.birthday);
  getline(cin, sv.address);
  getline(cin, sv.ma_thue);
  getline(cin, sv.contract);
  k++;
}

//sap xep nha vien tu gia den tre
int old_to_young(NhanVien a, NhanVien b){
  return a.ngay_sinh_chuan_hoa < b.ngay_sinh_chuan_hoa;
}

void sapxep(NhanVien *ds, int n){
  sort(ds, ds + n, old_to_young);
}

//in danh sach
void inds(NhanVien *ds, int n){
  for(int i = 0; i < n; i++){
    cout << ds[i].id << " " << ds[i].name << " " << ds[i].sex << " " << ds[i].birthday << " "
    << ds[i].address << " " << ds[i].ma_thue << " " << ds[i].contract << endl;
  }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}