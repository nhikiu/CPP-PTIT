#include <bits/stdc++.h>

using namespace std;

struct NhanVien{
	string maNhanVien = "00001", name, sex, birthday, address, maThue, contract;
};

void nhap (NhanVien &a)
{
  getline(cin, a.name);
  getline(cin, a.sex);
  getline(cin, a.birthday);
  getline(cin, a.address);
  cin >> a.maThue >> a.contract;
}

void in (NhanVien &a)
{
  cout << a.maNhanVien << " " << a.name << " " << a.sex << " " << a.birthday << " " << a.address << " " << a.maThue << " " << a.contract;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}