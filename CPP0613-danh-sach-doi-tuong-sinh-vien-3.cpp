//CPP0613 - DANH SÁCH ĐỐI TƯỢNG SINH VIÊN - 3
#include <bits/stdc++.h>
using namespace std;

class SinhVien{
public:
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
    for(int i = 0; i < sv.name.length(); i++){
      sv.name[i] = tolower(sv.name[i]);
    }
    string arr[50];
    int k = 0;
    istringstream iss(sv.name);
    while(iss >> arr[k]) k++;
    sv.name = "";
    for(int i = 0; i < k; i++){
      arr[i][0] = toupper(arr[i][0]);
      sv.name += arr[i] + " ";
    }
    if(sv.birthday.length() == 8){
      sv.birthday.insert(0, "0");
      sv.birthday.insert(3, "0");
    }
    else if(sv.birthday.length() == 9){
      if(sv.birthday[1] == '/') sv.birthday.insert(0, "0");
      else if(sv.birthday[2] == '/') sv.birthday.insert(3, "0");
    }
    os << "B20DCCN";
    if(sv.id < 10) os << "00";
    else if(sv.id < 100) os << "0";
    os << sv.id << " " << sv.name << sv.className << " " << sv.birthday << " " << fixed << setprecision(2) << sv.gpa << endl;
    return os;
  }
};

int SinhVien::stt = 1;

bool sap_xep_gpa(SinhVien a, SinhVien b){
  if(a.gpa < b.gpa) return false;
  return true;
}

void sapxep(SinhVien ds[], int n){
  sort(ds, ds + n, sap_xep_gpa);
}


int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
// 2
// ngUYen Van NaM
// D20DCCN01-B
// 2/12/2002
// 2.17
// Nguyen QuanG hAi
// D20DCCN02-B
// 1/9/2002
// 3.0