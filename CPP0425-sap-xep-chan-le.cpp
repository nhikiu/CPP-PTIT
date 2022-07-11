#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], A[n];
		for ( int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int k = 0;
		for (int i = (n-1)/2 + 1; i < n; i++){
			A[k++] = a[i];
		}
		for (int i = 0; i < (n-1)/2; i++){
			cout << a[i] << " " << A[i] << " ";
		}
		if(n % 2 == 0) cout << a[(n-1)/2] << " " << A[(n-1)/2];
		else cout << a[(n-1)/2];
		cout << endl;
	}
	return 0;

	}