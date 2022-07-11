#include<iostream>
using namespace std;

long long GCD(long long a, long long b){
	long long tmp;
	while(b != 0){
		tmp = a%b;
		a = b;
		b = tmp;
	}
	return a;
}

long long LCM(long long a, long long b){
	return (a*b)/GCD(a,b);
}

int main(){
	int t; 
	long long n;
	cin>>t;
	while(t--){
		cin>>n;
		long long result = 1;
		for(long long i = 2; i <= n; i++){
			result = LCM(result,i);
		}
		cout<<result<<endl;
	}
	return 0;
}

