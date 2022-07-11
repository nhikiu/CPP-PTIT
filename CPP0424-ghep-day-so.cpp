#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k, t = 0;
		cin >> n >> k;
		int a[k][n], x[n*k];
		for(int i = 0; i < k; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
				x[t++] = a[i][j];
			}
		}
		for(int i = 0; i < t; i++){
			for(int j = i+1; j < t; j++){
				if(x[i] > x[j]) swap(x[i], x[j]);
			}
		}
		for(int i = 0; i < t; i++) cout << x[i] << " ";
		cout << endl;
	}
	return 0;
}

