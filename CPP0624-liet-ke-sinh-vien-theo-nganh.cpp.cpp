//CPP0624 - LIỆT KÊ SINH VIÊN THEO NGÀNH
#include <bits/stdc++.h>
using namespace std;

class Student{
public:
  string id, name, className, email;
  string majors;
public:
  Student(){
    id = name = className = email = "";
    majors = "";
  }
  friend istream& operator >>(istream &is, Student &st){
    getline(is, st.id);
    getline(is, st.name);
    getline(is, st.className);
    getline(is, st.email);
    for(int i = 3; i < 7; i++){
      st.majors += st.id[i];
    }
    if(st.majors == "DCKT") st.majors = "Ke toan";
    else if(st.majors == "DCCN") st.majors = "Cong nghe thong tin";
    else if(st.majors == "DCAT") st.majors = "An toan thong tin";
    else if(st.majors == "DCVT") st.majors = "Vien thong";
    else if(st.majors == "DCDT") st.majors = "Dien tu";
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
  cin.ignore();
  string nganh_hoc = "";
  for(int i = 0; i < t; i++) {
    string s = "";
    getline(cin, nganh_hoc);
    s = nganh_hoc;
    for(int j = 0; j < nganh_hoc.length(); j++) {
      s[j] = toupper(s[j]);
    }
    cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
    if(nganh_hoc == "Cong nghe thong tin" || nganh_hoc == "An toan thong tin"){
      for(int j = 0; j < n; j++){
        if(nganh_hoc == ds[j].majors && ds[j].className[0] != 'E'){
          cout << ds[j];
        }
    }
    }
    else {
      for(int j = 0; j < n; j++){
        if(nganh_hoc == ds[j].majors){
          cout << ds[j];
        }
      }
    }
  }
  return 0;
}