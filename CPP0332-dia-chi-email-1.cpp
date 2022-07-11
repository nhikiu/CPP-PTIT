#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++){
		if (s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}
	}
	int k = 0;
	string arr[20];
	istringstream iss(s);
	while(iss >> arr[k]) k++;
	cout << arr[k - 1];
	for (int i = 0; i < k - 1; i++) cout << arr[i][0];
	cout << "@ptit.edu.vn";
	return 0;
}

