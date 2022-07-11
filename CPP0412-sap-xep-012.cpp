#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n+1];
		for(int i = 1; i <= n; i++)	cin >> a[i];
		for(int i = 1; i <= n; i++)	if(a[i] == 0) cout << "0 ";
		for(int i = 1; i <= n; i++)	if(a[i] == 1) cout << "1 ";
		for(int i = 1; i <= n; i++)	if(a[i] == 2) cout << "2 ";
		cout << endl;
	}
	return 0;
}

