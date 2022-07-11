#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long b, p, i = 0, count = 0;
		cin >> b >> p;
		for(long long i = 1; i < p; i++){
			if(i * i % p == 1) count++;
		}
		count = count * (b/p);
		for(long long i = 1; i <= b%p; i++){
			if(i * i % p == 1) count++;
		}
		cout << count << endl;
	}
	return 0;
}
