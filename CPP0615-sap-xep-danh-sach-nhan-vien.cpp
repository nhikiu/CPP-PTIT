//CPP0615 - SẮP XẾP DANH SÁCH ĐỐI TƯỢNG NHÂN VIÊN
#include <bits/stdc++.h>
using namespace std;

class NhanVien{
public:
  int id;
  static int stt;
  string name;
  string sex;
  string birthday;
  string address;
  string ma_so_thue;
  string ngay_ki_hd;
public:
  NhanVien(){
    name = sex = birthday = address = ma_so_thue = ngay_ki_hd = "";
    id = stt++;
  }
  friend istream &operator >>(istream &is, NhanVien &nv){
    if(nv.id == 1) scanf("\n");
    getline(is, nv.name);
    getline(is, nv.sex);
    getline(is, nv.birthday);
    getline(is, nv.address);
    getline(is, nv.ma_so_thue);
    getline(is, nv.ngay_ki_hd);
    return is;
  }
  friend ostream &operator <<(ostream &os, NhanVien &nv){
    os << "000";
    if(nv.id < 10) cout << "0";
    os << nv.id << " " << nv.name << " " << nv.sex << " " << nv.birthday << " " << nv.address << " " << nv.ma_so_thue << " " << nv.ngay_ki_hd << endl;
    return os;
  }
};

int NhanVien::stt = 1;

string chuanHoa(string day){
  for(int i = 0; i < day.length(); i++){
    if(day[i] == '/') day[i] = ' ';
  }
  string arr[10];
  int k = 0;
  istringstream iss(day);
  while(iss >> arr[k]) k++;
  day = "";
  day = arr[2] + arr[0] + arr[1];// Ban đầu thứ tự là mm/dd/yyyy
  return day;
}

bool sap_xep_gia_tre(NhanVien a, NhanVien b){
  if(chuanHoa(a.birthday) <= chuanHoa(b.birthday)) return true;
  return false;
}

void sapxep(NhanVien *ds, int n){
  sort(ds, ds + n, sap_xep_gia_tre);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
// 3
// Nguyen Van A
// Nam
// 10/22/1982
// Mo Lao-Ha Dong-Ha Noi
// 8333012345
// 31/12/2013
// Ly Thi B
// Nu
// 10/15/1988
// Mo Lao-Ha Dong-Ha Noi
// 8333012346
// 22/08/2011
// Hoang Thi C
// Nu
// 04/02/1981
// Mo Lao-Ha Dong-Ha Noi
// 8333012347
// 22/08/2011