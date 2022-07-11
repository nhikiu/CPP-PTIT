#include<bits/stdc++.h>
using namespace std;

struct Human{
	string name, day, chuan_hoa;
};

string tach(string &s){
	for (int i = 0; i < s.length(); i++){
		if (s[i] == '/') s[i] = ' ';
	}
	istringstream iss(s);
	int k = 0;
	string a[100];
	while(iss >> a[k]) k++;
	string str = "";
	for (int i = 0; i < k; i++) str = a[i] + str;
	return str;
}

void nhap(Human &a){
	cin >> a.name;

	getline(cin, a.day);
	a.chuan_hoa = tach(a.day);
}

int sap_xep(Human a, Human b){
	return a.chuan_hoa < b.chuan_hoa;
}

int main(){
	int n;
	cin >> n;
	cin.ignore();
	Human ds[n];
	for (int i = 0; i < n; i++){
		nhap(ds[i]);
	}
	sort(ds, ds + n, sap_xep);
	cout << ds[n - 1].name << endl << ds[0].name << endl;
	return 0;
}