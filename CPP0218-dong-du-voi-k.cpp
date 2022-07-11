//CPP0218 - ĐỒNG DƯ VỚI K
#include<bits/stdc++.h>
using namespace std;

void solve(long long *a, long long n){
	long long count = 1, dem = 0, mark = 0;
	vector <long long> b;
	if(n == 1 || n == 0) cout << "0" << endl;
	else {
		sort(a,a+n);
		for(long long i = 1; i < n; i++){
			if(a[i] > a[i - 1]){
				long long s = a[i] - a[i - 1];
				if(s > 0){
					for(long long i = 1; i <= s; i++){
						if(s % i == 0) b.push_back(i);
					}
				}
			}
		}
		for (long long i = 1; i < n; i++) if (a[i] == a[i - 1]) mark++;
		sort(b.begin(), b.end());
		long long k = *b.end();
		while(b.size() != 0){
			b.pop_back();
			if (*b.end() == k) count++;
			else{
				count = 1;
				k = *b.end();
			}
			if(count == n - 1 - mark) dem++;
		}
		cout << dem << endl;
	}
}

int main (){
	long long t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long a[n];
		for(long long i = 0; i < n; i++) cin >> a[i];
		solve(a, n);
	}
	return 0;
}