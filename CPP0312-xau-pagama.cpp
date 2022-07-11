#include<bits/stdc++.h>

using namespace std;

int main() {
	int t, k, check[500];
	string s;
	cin >> t;
	while(t--) {
		cin.ignore();
		getline(cin, s);
		cin >> k;
		for (int i = 'a'; i <= 'z'; i++) {
			check[i] = 0;
		}
		for (int i = 0; i < s.length(); i++) {
			for (int j = 'a'; j <= 'z'; j++) {
				if (s[i] == j) check[j] = 1;
			}
		}
		int count = 0;
		for (int i = 'a'; i <= 'z'; i++) {
			if(check[i] == 0) count++;
		}
		cout << ((count <= k) ? 1 : 0) << endl;
	}
	return 0;
}
