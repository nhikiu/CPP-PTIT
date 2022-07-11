//CPP0714 - HOÁN VỊ LIỀN KỀ PHÍA TRƯỚC
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int *a = new int[n], tmp = n - 2;
		for(int i = 0; i < n; i++) cin >> a[i];
		while(tmp >= 0 && a[tmp] < a[tmp + 1]) tmp--;
		swap(a[tmp], a[tmp + 1]);
		for(int i = tmp + 1; i < n - 1; i++){
      for (int j = i + 1; j < n; j++){
        if (a[i] > a[j]) swap(a[i], a[j]);
      }
    }
		for(int i = 0; i < n; i ++) cout << a[i] << " ";
		cout << endl;
    delete[] a;
	}
}