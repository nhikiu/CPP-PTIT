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
		int n;
		cin >> n;
		for(int i = 2; i <= n/2; i++){
			if(nt(i)&&nt(n-i)){
				cout << i << " " << n-i << endl;
				break;
			}
		}
	}
	return 0;
}



