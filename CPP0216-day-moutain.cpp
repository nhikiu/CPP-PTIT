#include<bits/stdc++.h>

using namespace std;
#define MAX 1000000

int solve(string s){
	if(s.find("01") != -1) return false;
	return true;	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, l, r;
		cin >> n;
		int *a = new int[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		cin >> l >> r;
		string s = "";
		for (int i = l; i < r; i++){
			if(a[i] <= a[i + 1]) s = s + '1';
			else s = s + '0';
		}
		if(solve(s)) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}
