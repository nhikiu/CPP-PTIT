#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n][n], arr[n*n], b = 0, k = 0, t = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			arr[t++] = a[i][j];
		}
	}
	sort(arr,arr+n*n);
	while(b <= n/2){
		for(int i = b; i <= n - b -1; i++)  a[b][i]= arr[k++];
		for(int i = b+1; i <= n-b-1; i++) a[i][n-b-1]= arr[k++];
		for(int i = n-b-2; i >= b; i--) a[n-b-1][i]= arr[k++];
		for(int i = n-b-2; i >= b+1; i--)  a[i][b]= arr[k++];
		b++;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
