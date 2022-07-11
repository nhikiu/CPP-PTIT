#include<iostream>

using namespace std;

int sum(long long n){
	int s = 0;
	while(n > 0){
		s += n % 10;
		n /= 10;
	}
	return s;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		while(n >= 10){
			n = sum(n);
		}
		cout << n << endl;
	}
	return 0;
}
