#include<bits/stdc++.h>

using namespace std;

int solve(char a[], int n, int i){
	char t = a[i];
	for (int j = 0; j < i; j++){
		if(t == a[j]) return 0;
	}
	return 1;
}

int count(char a[], int n, int i){
	char t = a[i];
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(t == a[i]) count++;
	}
	return count;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin.ignore();
		char s[10001];
		cin >> s;
		int n = strlen(s);
		for(int i = 0; i < n; i++) {
			if (solve(s,n,i) == 1 && count(s,n,i) == 1) cout << s[i];
		}
		cout << endl;
	}
	return 0;
}
