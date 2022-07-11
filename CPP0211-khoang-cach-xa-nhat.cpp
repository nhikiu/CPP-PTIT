#include<bits/stdc++.h>
using namespace std;

void solve(long long *a, int n){
  int max = 0;
  for(int i = 0; i < n; i++){
		for(int j = n - 1; j >= i + max; j--){
			if (a[i] < a[j] && j - i > max){
				max = j - i;
				break;
			}
		}
	}
	cout << max << endl;
}

int main (){
	long long t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
    long long a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		solve(a, n);
	}
	return 0;
}