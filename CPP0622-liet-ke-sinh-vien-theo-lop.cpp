//CPP0622 - LIỆT KÊ SINH VIÊN THEO LỚP
#include <bits/stdc++.h>
using namespace std;

class Student{
public:
  string id, name, className, email;
public:
  Student(){
    id = name = className = email = "";
  }
  friend istream& operator >>(istream &is, Student &st){
    getline(is, st.id);
    getline(is, st.name);
    getline(is, st.className);
    getline(is, st.email);
    return is;
  }
  friend ostream& operator<<(ostream &os, Student const&st){
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
  string s[1000];
  cin.ignore();
  for(int i = 0; i < t; i++) getline(cin, s[i]);
  int count = 0;
  for(int i = 0; i < t; i++){
    count = 0;
    for(int j = 0; j < n; j++){
      if(s[i] == ds[j].className) count++;
    }
    if(count > 0) cout << "DANH SACH SINH VIEN LOP " + s[i] + ":" << endl;
    for(int j = 0; j < n; j++){
      if(s[i] == ds[j].className) cout << ds[j];
    }
  }
  return 0;
}
