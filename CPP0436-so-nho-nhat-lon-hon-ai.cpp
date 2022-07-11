//CPP0436 - SỐ NHỎ NHẤT LỚN HƠN A[i]
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        vector<int> b;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            b.push_back(a[i]);
        }
        sort(b.begin(), b.end());
        for (int i = 0; i < n; i++){
            if (upper_bound(b.begin(), b.end(), a[i]) != b.end()){
                int vt = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
                cout << b[vt] << " ";
            }
            else cout << "_ ";
        }
        cout << endl;
    }
}