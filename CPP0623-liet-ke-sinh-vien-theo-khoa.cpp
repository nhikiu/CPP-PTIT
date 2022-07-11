//CPP0623 - LIỆT KÊ SINH VIÊN THEO KHÓA
#include <bits/stdc++.h>
using namespace std;

class Student{
public:
  string id, name, className, email;
  int year;
public:
  Student(){
    id = name = className = email = "";
    year = 0;
  }
  friend istream& operator >>(istream &is, Student &st){
    getline(is, st.id);
    getline(is, st.name);
    getline(is, st.className);
    getline(is, st.email);
    st.year = 2000 + (st.className[1] - '0') * 10 + st.className[2] - '0';
    return is;
  }
  friend ostream& operator<<(ostream &os, Student &st){
    os << st.id << " " << st.name << " " << st.className << " " << st.email << endl;
    return os;
  }
};

int main(){
  int n;
  cin >> n;
  cin.ignore();
  Student ds[1000];
  for(int i = 0; i < n; i++) cin >> ds[i];
  int t;
  cin >> t;
  int khoa_hoc[1000];
  for(int i = 0; i < t; i++) cin >> khoa_hoc[i];
  int count = 0;
  for(int i = 0; i < t; i++){
    count = 0;
    for(int j = 0; j < n; j++){
      if(khoa_hoc[i] == ds[j].year) count++;
    }
    if(count > 0) cout << "DANH SACH SINH VIEN KHOA " << khoa_hoc[i] << ":" << endl;
    for(int j = 0; j < n; j++){
      if(khoa_hoc[i] == ds[j].year) cout << ds[j];
    }
  }
  return 0;
}