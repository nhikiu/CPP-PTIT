#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(n % 10 == 6){
			n /= 10;
			if(n % 10 == 8) cout << "1\n";
			else cout << "0\n";
		}
		else cout << "0\n";
	}
	return 0;
}





