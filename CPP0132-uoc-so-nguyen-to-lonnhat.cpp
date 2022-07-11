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
		cin >> n; int dem = 0, x;
		if(nt(n)) cout << n;
		else{
			for(long long i = 2; i <= sqrt(n); i++){
				while(n % i == 0 && nt(i)){
					if(i != n/i && nt(n/i)){
						cout << n/i;
						dem++;
						break;
					} 
					n /= i;
					x = i;
				} 
			}
			if(dem == 0) cout << x;
		}
		cout << endl;
	}
	return 0;
}



