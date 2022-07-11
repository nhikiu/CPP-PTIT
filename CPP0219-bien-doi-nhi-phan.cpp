#include<bits/stdc++.h>

using namespace std;

int main(){
	int t, n, m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		int a[n][m], b[n][m], p = 0, q = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
				b[i][j] = a[i][j];
				
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i][j] == 1){
					for(int k = 0; k < m; k++) b[i][k] = 1;
					for(int p = 0; p < n; p++) b[p][j] = 1;
				}
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << b[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
