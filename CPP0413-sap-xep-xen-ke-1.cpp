#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n+1], s = 0;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		for(int i = 1; i < n; i++){
			for(int j = i + 1; j <= n; j++){
				if(a[i] > a[j]) swap(a[i],a[j]);
			}
		}
		for(int i = 1; i <= n/2; i++){
			cout << a[n-i+1] << " " << a[i] << " ";
		} 
		if(n % 2 == 1) cout << a[(n+1)/2];
		cout << endl;
	}
	return 0;
}

