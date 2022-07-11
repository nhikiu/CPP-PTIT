#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
	string name, lop;
  string msv = "N20DCCN001";
  char birthday[11];
  float gpa;
};

void nhapThongTinSV (SinhVien &a)
{
  getline(cin, a.name);

  cin >> a.lop >> a.birthday >> a.gpa;
}

void inThongTinSV (SinhVien a)
{
  string tmp = "";
  char *p = strtok(a.birthday, "/");
  while(p != NULL) {
    if(strlen(p) == 1) {
      tmp += "0" + (string(p)) + "/";
    }
    else {
      tmp += string(p) + "/";
    }
    p = strtok(NULL, "/");
  }
  for (int i = 0; i < 11; i++) a.birthday[i] = tmp[i];
  a.birthday[10] = NULL;
  cout << a.msv << "\t" << a.name << "\t" << a.lop << "\t" << a.birthday << "\t" << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}