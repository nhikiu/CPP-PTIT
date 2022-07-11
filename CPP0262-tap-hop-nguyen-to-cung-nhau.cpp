//CPP0262 - TẬP HỢP NGUYÊN TỐ CÙNG NHAU
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool check(ll n, ll m){
    ll tong = n * (n + 1) / 2;
    ll sum1 = (tong + m) / 2;
    ll sum2 = tong - sum1;
    if (tong < m) return false;
    if (abs(sum1 - sum2) == m && __gcd(sum1, sum2) == 1) return true;
    return false;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        ll n, m;
        cin >> n >> m;
        if (check(n, m)) cout << "Yes\n";
        else cout << "No\n";
    }
}