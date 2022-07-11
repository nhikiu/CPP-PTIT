#include<bits/stdc++.h>
using namespace std;

string tong(string s1, string s2){
	while(s1.length() < s2.length()) s1 = "0" + s1;
	while(s2.length() < s1.length()) s2 = "0" + s2;
	string sum = "";
	int nho = 0;
	for (int i = s1.length() - 1; i >= 0; i--){
		int so1 = s1[i] - 48;
		int so2 = s2[i] - 48;
		int tong = so1 + so2 + nho;
		sum = (char) (tong % 10 + 48) + sum;
		nho = tong / 10;
	}
	if (nho > 0) sum = (char) (nho + 48) + sum;
	return sum;

}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		cout << tong(s1, s2) << endl;
	}
	
	return 0;
}

