//CPP0602 - KHAI BÁO LỚP SINH VIÊN - 2
#include <bits/stdc++.h>
using namespace std;

class SinhVien{
private:
  string id;
  string name;
  string className;
  string birthday;
  float gpa;
public:
  SinhVien(){
    id = "";
    name = "";
    className = "";
    birthday = "";
    gpa = 0;
  }
  friend istream& operator >> (istream &is, SinhVien &st){
    st.id = "B20DCCN001";
    getline(is, st.name);
    getline(is, st.className);
    getline(is, st.birthday);
    is >> st.gpa;
    return is;
  }
  friend ostream& operator << (ostream &os, SinhVien &st){
    if(st.birthday.length() == 8){
      st.birthday.insert(0, "0");
      st.birthday.insert(3, "0");
    }
    else if(st.birthday.length() == 9){
      if(st.birthday[1] == '/') st.birthday.insert(0, "0");
      else if(st.birthday[2] == '/')st.birthday.insert(3, "0");
    }
    os << st.id << " " << st.name << " " << st.className << " " << st.birthday << " " << fixed << setprecision(2) << st.gpa;
    return os;
  }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}