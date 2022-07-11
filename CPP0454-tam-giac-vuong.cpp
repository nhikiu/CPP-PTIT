//CPP0454 - TAM GIÁC VUÔNG
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    long long a[n], b[n], c[n], x = 0, y = 0, m = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(int i = 0; i < n; i++){
      if(a[i] % 4 == 0){
        b[x] = a[i];
        c[x] = i;
        x++;
      }
      else y++;
    }
    if(x == 0 || y == 0) cout << "NO";
    else{
      for(int i = 0; i < x; i++){
        for(int j = c[i] + 1; j < n; j++){
          double z = sqrt(a[j] * a[j] - b[i] * b[i]);
          long long e = sqrt(a[j] * a[j] - b[i] * b[i]);
          if(z == e){
            for(int k = 0; k < j; k++){
              if(a[k] == z){
                m = 1;
                break;
              }
            }
          }
          if(m == 1) break;
        }
        if (m == 1) break;
      }
      if (m == 1) cout << "YES";
      else cout << "NO";
    }
    cout << endl;
  }
}