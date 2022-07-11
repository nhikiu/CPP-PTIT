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
		cin >> n >> k;
		int a[n+1], j = 1;
		if(nt(n))	a[j++] = n;
		else{
			for(long long i = 2; i <= sqrt(n); i++){
				while(n % i == 0 && nt(i)){
					a[j++] = i;
					if(i != n/i && nt(n/i)) a[j++] = n/i;
					n /= i;
				} 
			}
		}
		if(k < j) cout << a[k];
		else cout << "-1";
		cout << endl;
	}
	return 0;
}



