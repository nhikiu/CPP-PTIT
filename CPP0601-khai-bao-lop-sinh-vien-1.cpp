//CPP0601 - KHAI BÁO LỚP SINH VIÊN - 1
#include <bits/stdc++.h>
using namespace std;

class SinhVien {
  private:
    string id;
    string name;
    string Class_name;
    string birthday;
    float point;
  public:
    SinhVien(){
      id = "";
      name = "";
      Class_name = "";
      birthday = "";
      point = 0;
    }
    void nhap(){
      id = "B20DCCN001";
      getline(cin, name);
      getline(cin, Class_name);
      getline(cin, birthday);
      cin >> point;
    }

    string normalDay(string day){
      for(int i = 0; i < day.length(); i++){
        if(day[i] == '/') day[i] = ' ';
      }
      string arr[10], chuanHoa = "";
      int k = 0;
      istringstream iss(day);
      while(iss >> arr[k]) k++;
      for(int i = 0; i < k - 1; i++){
        if(arr[i].length() == 1) chuanHoa += "0" + arr[i] + "/";
        else chuanHoa += arr[i] + "/";
      }
      chuanHoa += arr[k - 1];
      return chuanHoa;
    }

    void xuat(){
      cout << id << " " << name << " " << Class_name << " " << normalDay(birthday) << " "  << fixed << setprecision(2) << point << endl;
    }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}