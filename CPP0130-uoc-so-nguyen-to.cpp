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
	long long n; 
	cin >> t;
	while(t--){
		cin >> n;
		if(nt(n)) cout << n;
		else{
			for(long long i = 2; i <= sqrt(n); i++){
				while(n % i == 0 && nt(i)){
					cout << i << " ";
					if(i != n/i && nt(n/i)) cout << n/i << " ";
					n /= i;
				} 
			}
		}
		cout << endl;
	}
	return 0;
}


