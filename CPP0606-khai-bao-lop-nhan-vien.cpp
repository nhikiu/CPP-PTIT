//CPP0606 - KHAI BÁO LỚP NHÂN VIÊN
#include <bits/stdc++.h>
using namespace std;

class NhanVien{
private:
  string id;
  string name;
  string sex;
  string birthday;
  string address;
  string Personal_tax_code;
  string contract_signing_date;
public:
  NhanVien(){}
  void nhap(){
    id = "00001";
    getline(cin, name);
    getline(cin, sex);
    getline(cin, birthday);
    getline(cin, address);
    getline(cin, Personal_tax_code);
    getline(cin, contract_signing_date);
  }
  void xuat(){
    cout << id << " " << name << " " << sex << " " << birthday << " " << address << " " << Personal_tax_code << " " << contract_signing_date;
  }
};

int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}