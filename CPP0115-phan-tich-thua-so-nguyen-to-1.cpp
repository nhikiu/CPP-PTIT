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
		int s = 0;
	while(t--){
		cin >> n;int i = 2;
		if(nt(n)) s += n;
		else{
			for(int i = 2; i <= n; i++){
				int dem = 0;
				while(n % i == 0){
					n /= i;
					s += i;
				}
			}
		}
	}
		cout << s << endl;
	return 0;
}



