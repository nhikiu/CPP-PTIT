#include<bits/stdc++.h>

using namespace std;

int solve(int a[], int b[], int n, int m){
	long long s1 = 0, s2, sum = 0;
	for(int i = 0; i < n; i++){
		s1 += a[i];
		s2 = 0;
		for(int j = i + 1; j < m; j++){
			s2 += b[j];
		}
		if(s1 + s2 > sum) sum = s1 + s2;
	}
	return sum;
}

int main(){
	int t, n, m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		int a1[n], a2[m];
		for(int i = 0; i < n; i++) cin >> a1[i];
		for(int i = 0; i < m; i++) cin >> a2[i];
		long long sum1 = solve(a1,a2,n,m);
		long long sum2 = solve(a2,a1,m,n);
		if(sum1 > sum2) cout << sum1 << endl;
		else cout << sum2 << endl;
	}
	return 0;
}
