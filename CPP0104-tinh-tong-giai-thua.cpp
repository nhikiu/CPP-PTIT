#include<iostream>
using namespace std;

int main(){
	long long n, gt = 1, s = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		gt *= i;
		s += gt;
	}
	cout << s;
	return 0;
}
