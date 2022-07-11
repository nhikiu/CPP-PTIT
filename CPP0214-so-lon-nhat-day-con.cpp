#include<bits/stdc++.h>

using namespace std;

int main(){
	int t, n, k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int a[n], max = -1;
		for(int i = 0; i < n; i++){
			max = -1;
			cin >> a[i];
			if(i >= k-1){
				for(int j = i - k+1; j <= i; j++ ){
					if(a[j] > max) max = a[j];
				}
				cout << max << " ";
			}
		} 
		cout << endl;
	}
	return 0;
}
