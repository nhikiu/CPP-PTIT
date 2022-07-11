#include<bits/stdc++.h>
using namespace std;

int solve(int a, int m){
	for(int i = 1; i < m; i++){
		if((a*i)%m==1){
			return i;
			break;
		}
	}
	return -1;
}

int main(){
	int t, a, m;
	cin >> t;
	while(t--){
		cin >> a >> m;
		cout << solve(a,m) << endl;
	}
	return 0;
}

