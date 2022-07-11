//CPP0712 - LIỆT KÊ TỔ HỢP
#include<bits/stdc++.h>
#define max 20
using namespace std;

int s[max], k, n;

void in(){
    for (int i = 1; i <= k; i++){
        cout << s[i];
    }
    cout << " ";
}

void sinh(int i){
    for (int j = s[i - 1] + 1; j <= n - k + i; j++){
        s[i] = j;
        if (i == k) in();
        else sinh(i + 1);
    }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    cin >> n >> k;
    s[0] = 0;
    sinh(1);
    cout << endl;
  }
  return 0;
}