#include<bits/stdc++.h>
using namespace std;

int nt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

void solve(int n){
	int count = 0;
	for(int i = 2; i <= n/2; i++){
		if(nt(i) && nt(n-i)){
			count++;
			cout << i << " " << n-i;
			break;
		}
	}
	if(count == 0) cout << "-1";
}

int main(){
	int t, n, x;
	cin >> t;
	while(t--){
		cin >> n;	
		solve(n);
		cout << endl;
	}
	return 0;
}

