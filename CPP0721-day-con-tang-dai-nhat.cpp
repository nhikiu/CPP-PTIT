//CPP0721 - DÃY CON TĂNG DÀI NHẤT
#include<bits/stdc++.h>
using namespace std;

int main (){
	long long t;
	cin >> t;
	while(t--){
		int n, k = 1;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int f[n] = {1};
		for(int i = 1; i < n; i++){
			int max = 1;
			for(int j = i - 1; j >= 0; j--) if (a[j] < a[i] && f[j] >= max) max = f[j] + 1;
			f[i] = max;
			if(max > k) k = max;
		}
		cout << k << endl;
	}
	return 0;
}