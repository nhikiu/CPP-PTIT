//CPP0730 - TỔNG LỚN NHẤT CỦA DÃY CON LIÊN TỤC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    long long n;
    cin >> n;
    long long a[n], max = INT_MIN, check = 0;
    for(int i = 0; i < n; i++){
      cin >> a[i];
      if (a[i] > 0) check = 1;
      else if (max < a[i]) max = a[i];
    }
    long long sum = 0, mark = a[0];
    if(check == 0) cout << max;
    else{
      for(int i = 0; i < n; i++){
        if(sum + a[i] < 0){
          sum = 0;
          continue;
        }
        sum += a[i];
        if (mark < sum) mark = sum;
      }
      cout << mark;
    }
    cout << endl;
  }
}