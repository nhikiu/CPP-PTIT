//CPP0423 - SỐ NHỎ HƠN K
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while (t--){
    int n, k;
    cin >> n >> k;
    int *a = new int[n], dem = 0, count = 0;
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }
		for(int i = 0; i < n; i++){
			if (a[i] <= k) dem++;
		}
    for(int i = 0; i < dem; i++){
			if(a[i] > k) count++;
		}
    int min = count;
    for(int i = 0, j = dem; j < n; i++, j++){
      if(a[i] > k)  count--;
      if(a[j] > k) count++;
      if(min >= count) min = count;
    }
    cout << min << endl;
		delete[] a;
  }
}