#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
  int msv;
  string ten, lop;
  char ngaysinh[11];
  double gpa;

};

void nhap(SinhVien ds[], int n){
  for (int i = 0; i < n; i++){
    cin.ignore();
    getline(cin, ds[i].ten);
    getline(cin, ds[i].lop);
    cin >> ds[i].ngaysinh;
    cin >> ds[i].gpa;
  }
}

void in(SinhVien ds[], int n){
  for (int i = 0; i < n; i++){
    ds[i].msv = i + 1;
    string tmp = "";
    char *p = strtok(ds[i].ngaysinh, "/");
    while(p != NULL){
      if (strlen(p) == 1) tmp += "0" + (string(p)) + "/";
      else tmp += (string(p)) + "/";
      p = strtok(NULL, "/");
    }
    for (int j = 0; j < 11; j++) ds[i].ngaysinh[j] = tmp[j];
    ds[i].ngaysinh[10] = NULL;
    if(ds[i].msv < 10) cout << "B20DCCN00" << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].ngaysinh << " " << fixed << setprecision(2) << ds[i].gpa << endl;
    else if(ds[i].msv < 100) cout << "B20DCCN0" << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].ngaysinh << " " << fixed << setprecision(2) << ds[i].gpa << endl;
    else if(ds[i].msv < 1000) cout << "B20DCCN" << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].ngaysinh << " " << fixed << setprecision(2) << ds[i].gpa << endl;
  }
}

int main(){
  struct SinhVien ds[50];
  int N;
  cin >> N;
  nhap(ds, N);
  in(ds, N);
  return 0;
}