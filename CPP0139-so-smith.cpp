#include<bits/stdc++.h>

using namespace std;

int prime(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++) if(n % i == 0) return 0;
	return 1;
}

int solve(int n){
	int m = n, s = 0;
	while(m > 0){
		s += m % 10;
		m /= 10;
	}
	int s1 = 0;
	for(int i = 2; i <= n; i++){
		int dem = 0, sum = 0;
		while(n % i == 0){
			dem++;
			n /= i;
		}
		if(dem >= 1){
			int t = i;
			while(t > 0){
				sum += t%10;
				t /= 10;
			}
			s1 += sum * dem;
		}
	}
	if(s1 == s) return 1;
	return 0;
}

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		if(prime(n) == 0 && solve(n)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
