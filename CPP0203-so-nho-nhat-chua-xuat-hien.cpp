#include<bits/stdc++.h>
using namespace std;
//https://ideone.com/2X9Avz
struct Student{
	string id, name, lop;
	float diem_thcs2, diem_cpp, dtb;
};

void nhap(Student &sv){
	cin >> sv.id;
	cin.ignore();
	getline(cin, sv.name);
	cin >> sv.lop;
	cin >> sv.diem_thcs2 >> sv.diem_cpp;
	sv.dtb = (sv.diem_cpp + sv.diem_thcs2)/2;
}

void diem_tren_7(Student *ds, int n){
	for (int i = 0; i < n; i++){
		if(ds[i].diem_cpp >= 7){
			cout << ds[i].id << " " << ds[i].name << " " << ds[i].lop << " " << ds[i].diem_cpp << " " << ds[i].diem_thcs2 << endl;
		}
	}
}

int sap_xep_name(Student sv1, Student sv2){
	return sv1.name < sv2.name;
}

void ho_ten(Student *sv, int n){
	sort(sv, sv + n, sap_xep_name);
	for (int i = 0; i < n; i++){
		cout << sv[i].id << " " << sv[i].name << " " << sv[i].lop << " " << sv[i].diem_cpp << " " << sv[i].diem_thcs2 << endl;
	}
}

int sap_xep_diem(Student sv1, Student sv2){
	return sv1.name > sv2.name;
}

void diem_tb(Student *sv, int n){
	sort(sv, sv + n, sap_xep_diem);
	for (int i = 0; i < n; i++){
		cout << sv[i].id << " " << sv[i].name << " " << sv[i].lop << " " << sv[i].diem_cpp << " " << sv[i].diem_thcs2 << endl;
	}
}

int main(){
	struct Student *sv = new Student[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin.ignore();
		nhap(sv[i]);
	}
	//diem_tren_7(sv, n);
	ho_ten(sv, n);
	diem_tb(sv, n);
	return 0;
}

