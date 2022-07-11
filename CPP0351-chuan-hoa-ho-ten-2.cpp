#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cin.ignore();
		string s;
		getline(cin, s);
		for (int i = 0; i < s.length(); i++){
			if (s[i] >= 'A' && s[i] <= 'Z'){
				s[i] += 32;
			}
		}
		string arr[20];
		int k = 0;
		istringstream iss(s);
		while(iss >> arr[k]) k++;
		for (int i = 0; i < k; i++) arr[i][0] = toupper(arr[i][0]);
		switch(n){
			case 1:
				cout << arr[k - 1] << " ";
				for (int i = 0; i < k - 1; i++) cout << arr[i] << " ";
				break;
			case 2:
				for (int i = 1; i < k; i++) cout << arr[i] << " ";
				cout << arr[0]; 
				break;
	
		}
		cout << endl;
	}
	return 0;
}

