//CPP0243 - SẮP ĐẶT HAI DÃY SỐ
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    int k;
    map<int, int> a;
    for (int i = 0; i < n; i++) {
        cin >> k;
        a[k]++;
    }
    vector<int> b;
    for (int i = 0; i < m; i++){
        cin >> k;
        if (a.find(k) != a.end()){
            int d = a[k];
            while (d--) b.push_back(k);
            a.erase(k);
        }
    }
    map<int, int>::iterator it;
    for (it = a.begin(); it != a.end(); it++){
        int d = it->second;
        while (d--) b.push_back(it->first);
    }
    for (int i = 0; i < n; i++) cout << b[i] << " ";
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}