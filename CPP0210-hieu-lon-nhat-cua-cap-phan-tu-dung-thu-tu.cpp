#include<bits/stdc++.h>

using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int max = a[1] - a[0];
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				if(a[j] - a[i] > max)	max = a[j] - a[i]; 
			}
		}
		cout << max << endl;
	}
	return 0;
}
