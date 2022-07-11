#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, k, s = 0;
		cin >> n >> k;
		for(int i = 1; i <= n; i++)	s += i % k;
		(s == k) ? cout << "1\n" : cout << "0\n";
	}
	return 0;
}
