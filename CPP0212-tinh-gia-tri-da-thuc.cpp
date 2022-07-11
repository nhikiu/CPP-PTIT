#include<bits/stdc++.h>

using namespace std;

#define modulo 1000000007
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, x, sum = 0;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i <= n-1; i++){
			long long s = 1;
			for(int j = n - i - 1; j >= 1; j--){
				s = (s*x)%modulo;
			}
			sum += a[i]*s;
			if(sum > modulo) sum %= modulo;
		}
		cout << sum << endl;	
	}
	
	return 0;
}
