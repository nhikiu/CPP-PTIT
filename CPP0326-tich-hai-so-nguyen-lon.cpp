//CPP0326 - TÍCH HAI SỐ NGUYÊN LỚN
#include <bits/stdc++.h>
using namespace std;

string chuso(char b, string a){
    string t;
    int du = 0;
    for (int i = a.length() - 1; i >= 0; i--){
        int x = (b - '0') * (a[i] - '0') + du;
        if (x > 9){
            du = x / 10;
            x = x % 10;
        }
        else du = 0;
        t.push_back(x + '0');
    }
    if (du > 0) t.push_back(du + '0');
    reverse(t.begin(), t.end());
    return t;
}

string tong(int n, string x, string s){
    for (int j = 0; j < n; j++) x.push_back('0');
    if (x.length() < s.length()) swap(x, s);
    int kc = x.length() - s.length(), du = 0;
    string sum;
    for (int j = 0; j < kc; j++) s.insert(0, "0");
    for (int i = x.length() - 1; i >= 0; i--){
        int t = x[i] - '0' + s[i] - '0' + du;
        if (t >= 10) {
            du = 1;
            t -= 10;
        }
        else du = 0;
        sum.push_back(t + '0');
    }
    if (du != 0) sum.push_back('1');
    reverse(sum.begin(), sum.end());
    return sum;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string a, b;
        cin >> a >> b;
        if (a.length() < b.length()) swap(a, b);
        string s, x;
        reverse(b.begin(), b.end());
        for (int i = 0; i < b.length(); i++){
            if (i == 0) s = chuso(b[i], a);
            else{
                x = chuso(b[i], a);
                s = tong(i, x, s);
            }
            x.clear();
        }
        cout << s << endl;
    }
}