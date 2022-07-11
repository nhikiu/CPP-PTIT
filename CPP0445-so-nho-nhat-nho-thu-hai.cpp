#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int n){
	int min = a[0], max = a[0];
	for(int i = 0; i < n; i++){
		if(max < a[i]) max = a[i];
		else if(min > a[i]) min = a[i];
	}
	int min2 = max;
	if(min2 == min) cout << "-1" << endl;
	else{
		for(int i = 0; i < n; i++){
			if(a[i] > min && a[i] < min2) min2 = a[i];
		}
		cout << min << " " << min2 << endl;
	}
}

int main(){
	int t, n, x;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n], count = 0;
		for(int i = 0; i < n; i++)	cin >> a[i];	
		solve(a,n);
	}
	return 0;
}

