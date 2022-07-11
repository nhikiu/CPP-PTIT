#include<bits/stdc++.h>

using namespace std;

struct NhanVien {
	int stt;
	string msv, name, lop, email, business;
};
int k = 1;

void nhap(NhanVien &a){
	a.stt = k;
	getline(cin, a.msv);
	getline(cin, a.name);
	getline(cin, a.lop);
	getline(cin, a.email);
	getline(cin, a.business);
	k++;
}

int sap_xep(NhanVien a, NhanVien b){
	return a.msv < b.msv;
}

void solve(NhanVien *ds, int n, string a){
	for(int i = 0; i < n; i++){
		if(a == ds[i].business){
			cout << ds[i].stt << " " << ds[i].msv << " " << ds[i].name << " "
			<< ds[i].lop << " " << ds[i].email << " " << ds[i].business << endl;
		}
	}
}

int main(){
	int n, t;
	cin >> n;
	cin.ignore();
	NhanVien ds[n];
	for (int i = 0; i < n; i++) nhap(ds[i]);
	sort(ds, ds + n, sap_xep);

	cin >> t;
	cin.ignore();
	while(t--){
		string doanh_nghiep;
		cin >> doanh_nghiep;
		solve(ds, n, doanh_nghiep);
	}
	return 0;
}