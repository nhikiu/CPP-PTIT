#include<iostream>
#include<cmath>
using namespace std;

int nt(long long n){
	if(n < 2) return 0;
	for(long long i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int m, n;
		cin >> m >> n;
		for(int i = m; i <= n; i++){
			if(nt(i)) cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}



