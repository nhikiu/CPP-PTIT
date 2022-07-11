#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n], s = 0;
		for(int i = 0; i < n - 1; i++){
			cin >> a[i];
			s += a[i];
		}
		cout << (n + 1) * n / 2 - s << endl;
	}
	return 0;
}

