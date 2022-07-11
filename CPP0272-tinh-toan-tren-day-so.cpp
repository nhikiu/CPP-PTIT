#include<bits/stdc++.h>

using namespace std;

#define modulo 1000000007;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		long long a[n], s = 1;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			s = (s * a[i]) % modulo;
		} 
		long long x = a[0]; long long sum = 1;
		for(int i = 1; i < n; i++) x = __gcd(x,a[i]);
		
		for(int i = 0; i < x; i++){
			sum = (sum * s)%modulo;
		}
		cout << sum << endl;
	}
	return 0;
}
