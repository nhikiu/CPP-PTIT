#include<bits/stdc++.h>

using namespace std;

int main(){
	int t, n, m, p;
	cin >> t;
	while(t--){
		cin >> n >> m >> p;
		int a[n][m], arr[n*m], b = 0, k = 0;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> a[i][j];
		while(b <= m*n){
			for(int i = b; i <= m - b -1; i++) arr[k++] = a[b][i];
			for(int i = b+1; i <= n-b-1; i++) arr[k++] = a[i][m-b-1];
			for(int i = m-b-2; i >= b; i--) arr[k++] = a[n-b-1][i];
			for(int i = n-b-2; i >= b+1; i--) arr[k++] = a[i][b];
			b++;
		}
	
		cout << arr[p-1] << endl;
	}
	return 0;
}
