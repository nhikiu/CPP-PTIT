//CPP0737 - DÃY CON TRUNG BÌNH LỚN NHẤT
#include<bits/stdc++.h>
using namespace std;

void solve(int *a, int n, int k){
  int last = 0, index = 0, current;
	for(int i = 0; i < k; i++) last += a[i];
	for(int i = 1; i < n - k + 1; i++){
		current = 0;
		for(int j = i; j < i + k; j++) current += a[j];
		if(current > last){
			last = current;
			index = i;
		}
	}
	for(int i = index; i < index + k; i++) cout << a[i] << " ";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
    solve(a, n, k);
    cout << endl;
	}
  return 0;
}