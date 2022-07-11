#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

struct SinhVien{
	string msv;
	string name, lop, day;
	float point;
};

int k = 1;

//chuyen ma sinh vien
string MSV(int n){
	string a = to_string(n);
	while(a.length() < 3) a = "0" + a;
	a = "B20DCCN" + a;
	return a;
}


//nhap danh sach n sinh vien
void nhap(SinhVien *ds, int n){
  for (int i = 0; i < n; i++){
    cin.ignore();
    ds[i].msv = MSV(i + 1);
    getline(cin, ds[i].name);
    getline(cin, ds[i].lop);
    getline(cin, ds[i].day);
    cin >> ds[i].point;
  }
}

//chuan hoa ho ten
void chuan_hoa(string s){
	for (int i = 0; i < s.length(); i++){
		if (s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}
	}
	string arr[100];
	int k = 0;
	istringstream iss(s);
	while(iss >> arr[k]) k++;
	for (int i = 0; i < k; i++){
		arr[i][0] = toupper(arr[i][0]);
	}
	for (int i = 0; i < k; i++) cout << arr[i] << " ";
}


//chuan hoa ngay thang nam sinh
void ngay_sinh(string s){
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '/') s[i] = ' ';
  }
  string arr[100];
  int x = 0;
  istringstream iss(s);
  while(iss >> arr[x]) x++;
  for (int i = 0; i < x; i++){
    if (arr[i].length() < 2) arr[i] = "0" + arr[i];
  }
  string day = "";
  day = arr[0] + "/" + arr[1] + "/" + arr[2];
  cout << day << " ";
}

//in danh sach
void in(SinhVien *ds, int n){
  for (int i = 0; i < n; i++){
    cout << ds[i].msv << " ";
    chuan_hoa(ds[i].name);
    cout << ds[i].lop << " ";
    ngay_sinh(ds[i].day);
    cout << fixed << setprecision(2) << ds[i].point << endl;
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