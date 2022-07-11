//CPP0610 - TÍNH TỔNG HAI ĐỐI TƯỢNG PHÂN SỐ
#include <bits/stdc++.h>
using namespace std;

class PhanSo{
private:
    long long tu;
    long long mau;
public:
    PhanSo(long long t, long long m){
        tu = t;
        mau = m;
    }
    friend istream &operator>>(istream &in, PhanSo &ps){
        in >> ps.tu >> ps.mau;
        return in;
    }
    friend PhanSo operator+(PhanSo a, PhanSo b){
        PhanSo tong(1, 1);
        tong.tu = b.tu * a.mau + b.mau * a.tu;
        tong.mau = a.mau * b.mau;
        long long uoc = __gcd(tong.tu, tong.mau);
        tong.tu /= uoc;
        tong.mau /= uoc;
        return tong;
    }
    friend ostream &operator<<(ostream &out, PhanSo a){
        out << a.tu << "/" << a.mau;
        return out;
    }
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}