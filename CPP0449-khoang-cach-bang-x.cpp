//CPP0449 - KHOẢNG CÁCH BẰNG X
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, x, check = 0;
    cin >> n >> x;
    int *a = new int[n];
    set<int> s;
    for (int i = 0; i < n; i++){
      cin >> a[i];
      s.insert(a[i]);
    }
    sort(a, a + n);
    for(int i = 0; i < n; i++){
			if(s.find(x + a[i]) != s.end()){
        check = 1;
        break;
      }
		}
		if(check == 1) cout << 1;
    else cout << -1;
    cout << endl;
		delete[] a;
  }
}