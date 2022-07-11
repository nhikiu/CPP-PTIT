//CPP0625 - SẮP XẾP DANH SÁCH GIẢNG VIÊN
#include <bits/stdc++.h>
using namespace std;

class Teacher{
public:
  string fullname;
  string subject;
  string name;
  int stt;
  static int tt;
public:
  Teacher(){
    fullname = "";
    subject = "";
    name = "";
    stt = tt;
    tt++;
  }
  friend istream& operator >>(istream &is, Teacher &tc){
    getline(is, tc.fullname);
    getline(is, tc.subject);
    string s[100];
    int k = 0;
    istringstream iss(tc.fullname);
    while(iss >> s[k]) k++;
    tc.name = s[k - 1];
    return is;
  }
  void chuanHoa(){
    string arr[100];
    int k = 0;
    istringstream iss(subject);
    while(iss >> arr[k]) k++;
    string s = "";
    for(int i = 0; i < k; i++){
      s += toupper(arr[i][0]);
    }
    subject = s;
  }
  friend ostream& operator <<(ostream &os, Teacher &tc){
    tc.chuanHoa();
    os << "GV";
    if(tc.stt < 10) os << "0";
    os << tc.stt << " " << tc.fullname << " " << tc.subject << endl;
    return os;
  }
};

int Teacher::tt = 1;

void sapxep(Teacher *ds, int n){
  for(int i = 0; i < n - 1; i++){
    for(int j = i + 1; j < n; j++){
      if(ds[i].name > ds[j].name) swap(ds[i], ds[j]);
      else if(ds[i].name == ds[j].name){
        if(ds[i].stt > ds[j].stt) swap(ds[i], ds[j]);
      }
    }
  }
}

int main(){
  int t;
  cin >> t;
  cin.ignore();
  Teacher ds[1000];
  for(int i = 0; i < t; i++){
    cin >> ds[i];
  }
  sapxep(ds, t);
  for(int i = 0; i < t; i++){
    cout << ds[i];
  }
  return 0;
}