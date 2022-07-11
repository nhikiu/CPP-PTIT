//CPP0611 - DANH SÁCH ĐỐI TƯỢNG SINH VIÊN - 1
#include <bits/stdc++.h>
using namespace std;

class SinhVien{
private:
  int id;
  string name;
  string className;
  string birthday;
  static int stt;
  float gpa;
public:
  SinhVien(){
    id = stt++;
    name = "";
    className = "";
    birthday = "";
    gpa = 0;
  }
  friend istream& operator>>(istream &is, SinhVien &sv){
    is.ignore();
    getline(is, sv.name);
    getline(is, sv.className);
    getline(is, sv.birthday);
    is >> sv.gpa;
    return is;
  }

  friend ostream& operator<<(ostream &os, SinhVien &sv){
    if(sv.birthday.length() == 8){
      sv.birthday.insert(0, "0");
      sv.birthday.insert(3, "0");
    }
    else if(sv.birthday.length() == 9){
      if(sv.birthday[1] == '/') sv.birthday.insert(0, "0");
      else if(sv.birthday[2] == '/') sv.birthday.insert(3, "0");
    }
    os << "B20DCCN0";
    if(sv.id < 10) os << 0;
    os << sv.id << " " << sv.name << " " << sv.className << " " << sv.birthday << " " << fixed << setprecision(2) << sv.gpa << endl;
    return os;
  }
};

int SinhVien::stt = 1;

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}