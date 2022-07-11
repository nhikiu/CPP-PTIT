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
	int t, n, k; 
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 2; i <= sqrt(n); i++){
			if(nt(i)) cout << i*i << " ";
		}
		cout << endl;
	}
	return 0;
}



