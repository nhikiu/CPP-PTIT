#include<iostream>
using namespace std;

long long GCD(long long a, long long b){
	while(a != b){
		if(a > b) a -= b;
		if(a < b) b -= a;
	}
	return a;
}

int main(){
	long long t, a, b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<a*b/GCD(a,b)<<" ";
		cout<<GCD(a,b)<<endl;
	}
	return 0;
}

