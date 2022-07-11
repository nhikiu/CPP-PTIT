#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a,a+n);
		int min = a[1] - a[0];
		for(int i = 0; i < n-1; i++){
			b[i] = a[i+1] - a[i];
			if(b[i] < min) min = b[i];
		}
		cout << min << endl;
	}
	return 0;
}

