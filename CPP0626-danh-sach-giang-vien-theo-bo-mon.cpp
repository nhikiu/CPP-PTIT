//CPP0626 - DANH SÁCH GIẢNG VIÊN THEO BỘ MÔN
#include <bits/stdc++.h>
using namespace std;

class Teacher{
public:
  string fullname;
  string subject;
  string name;
  string stt;
  static int tt;
public:
  friend istream& operator >>(istream &is, Teacher &tc){
    if(tt < 10) tc.stt = "GV0" + to_string(tt++);
    else tc.stt = "GV" + to_string(tt++);
    getline(is, tc.fullname);
    getline(is, tc.subject);
    string s[100];
    int k = 0;
    istringstream iss(tc.subject);
    while(iss >> s[k]) k++;
    tc.subject = "";
    for(int i = 0; i < k; i++){
      tc.subject += toupper(s[i][0]);
    }
    return is;
  }

  friend ostream& operator <<(ostream &os, Teacher &tc){
    os << tc.stt << " " << tc.fullname << " " << tc.subject << endl;
    return os;
  }
};

int Teacher::tt = 1;

int main(){
  int n;
  cin >> n;
  cin.ignore();
  Teacher ds[1000];
  for(int i = 0; i < n; i++){
    cin >> ds[i];
  }
  int t;
  cin >> t;
  cin.ignore();
  string s;
  for(int i = 0; i < t; i++){
    getline(cin, s);
    string arr[10];
    int k = 0;
    istringstream iss(s);
    while(iss >> arr[k]) k++;
    s = "";
    for(int j = 0; j < k; j++){
      s += toupper(arr[j][0]);
    }
    cout << "DANH SACH GIANG VIEN BO MON " << s << ":" << endl;
    for(int j = 0; j < n; j++){
      if(s == ds[j].subject){
        cout << ds[j];
      }
    }
  }
  return 0;
}