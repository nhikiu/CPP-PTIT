#include<bits/stdc++.h>
using namespace std;

int check(int a[], int n, int i){
	int check = a[i];
	for(int j = 0; j < i; j++){
		if(check == a[j]) return 0;
	}
	return 1;
}

int count(int a[], int n, int i){
	int check = a[i], count = 0;
	for(int i = 0; i < n; i++) if(check == a[i]) count++;
	return count;
}

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n], s = 0;
		for(int i = 0; i < n; i++) 	cin >> a[i];
		for(int i = 0; i < n; i++){
			if(check(a,n,i) && count(a,n,i) > 1) s += count(a,n,i);
		}
		cout << s << endl;
	}
	return 0;
}
