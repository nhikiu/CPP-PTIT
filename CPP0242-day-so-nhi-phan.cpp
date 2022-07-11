#include<bits/stdc++.h>
using namespace std;

int solve(int a[], int b[], int n){
	int max = 0, kc = 0;
	for(int i = 0; i < n; i++){
		int s1 = 0, s2 = 0;
		for(int j = i; j < n; j++){
			s1 += a[j];
			s2 += b[j];
			if(s1 == s2) kc = j - i + 1;
		}
		if(kc > max) max = kc;
	}
	return max;	
}

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a1[n], a2[n];
		for(int i = 0; i < n; i++) cin >> a1[i];
		for(int i = 0; i < n; i++) cin >> a2[i];
		cout << solve(a1,a2,n) << endl;
	}
	return 0;
}
