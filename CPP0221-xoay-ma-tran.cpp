#include<bits/stdc++.h>

using namespace std;

int main(){
int n;
		cin >> n;
		int a[n][n], arr[n*n], b = 0, k = 0;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				cin >> a[i][j];
		while(b <= n/2){
			for(int i = b; i <= n - b -1; i++) arr[k++] = a[b][i];
			for(int i = b+1; i <= n-b-1; i++) arr[k++] = a[i][n-b-1];
			for(int i = n-b-2; i >= b; i--) arr[k++] = a[n-b-1][i];
			for(int i = n-b-2; i >= b+1; i--) arr[k++] = a[i][b];
			b++;
		}
		cout << " ma tran xoay chieu: \n";
		for(int i = 0; i < n; i++){
			cout << arr[i] << " ";
		}
		cout << endl;

	
	return 0;
}
