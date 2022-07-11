#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, x;
	cin >> t;
	while(t--){
		cin >> n >> x;
		int a[n], count = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(x == a[i]) count++;
		}	
		if(count == 0) cout << "-1\n";
		else cout << count << endl;
	}
	return 0;
}

