#include<bits/stdc++.h>

using namespace std;

int solve(string s) {
	int n = s.length();
	for (int i = 0; i <= n/2; i++) {
		if((s[i] != s[n - i - 1]) || s[i] % 2 != 0 || s[n - i - 1] % 2 != 0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		cin.ignore();
		string s;
		cin >> s;
		cout << ((solve(s)==1) ? "YES\n" : "NO\n");
	}
	return 0;
}
