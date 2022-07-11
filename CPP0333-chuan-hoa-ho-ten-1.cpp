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
	string arr[100];
	int k = 0;
	istringstream iss(s);
	while(iss >> arr[k]) k++;
	for (int i = 0; i < k - 1; i++){
		arr[i][0] = toupper(arr[i][0]);
	}
	for (int i = 0; i < arr[k - 1].length(); i++) arr[k - 1][i] = toupper(arr[k - 1][i]);
	for (int i = 0; i < k - 2; i++) cout << arr[i] << " ";
	
	cout << arr[k - 2] << ", " << arr[k - 1];
	return 0;
}

