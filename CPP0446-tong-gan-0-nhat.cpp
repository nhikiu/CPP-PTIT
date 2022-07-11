#include<bits/stdc++.h>

using namespace std;
#define MAX 1000000
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int *a = new int[n];
		int *b = new int[MAX];
		int k = 0;
		//nhap mang
		for (int i = 0; i < n; i++) cin >> a[i];

		//tim tong cac phan tu
		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n; j++){
				b[k++] = a[i] + a[j];
			}
		}

		//tim tong min
		int min = abs(b[0]);
		for (int i = 0; i < k; i++){
			if(abs(b[i]) < min){
				min = abs(b[i]);
			}
		}
		for (int i = 0; i < k; i++){
			if(min == b[i] || min == -b[i]) {
				cout << b[i] << endl;
				break;
			}
		}
	}
	return 0;
}