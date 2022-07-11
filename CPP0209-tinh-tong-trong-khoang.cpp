#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k, l, r;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		while(k--){
			cin >> l >> r;
			int s = 0;
			for(int i = l-1; i < r; i++) s += a[i];
			cout << s << endl;
		}
	}
	return 0;
}
