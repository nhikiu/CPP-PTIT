#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, p, x = 0;
		cin >> n >> p;
		for(int i = 1; i <= n; i++){
			int t = i;
			while(t % p == 0){
				x++;
				t /= p;
			}
		}
		cout << x << endl;
	}
	return 0;
}
