//CPP0610 - TÍNH TỔNG HAI ĐỐI TƯỢNG PHÂN SỐ
#include <bits/stdc++.h>
using namespace std;

class PhanSo{
private:
  long long tu;
  long long mau;
public:
  PhanSo(long long tu, long long mau){
    this->tu = tu;
    this->mau = mau;
  }
  PhanSo(){}
  friend istream& operator>> (istream &is, PhanSo &ps){
    is >> ps.tu >> ps.mau;
    return is;
  }
  friend PhanSo operator+ (PhanSo a, PhanSo b){
    PhanSo sum(1, 1);
    sum.tu = a.tu * b.mau + a.mau * b.tu;
    sum.mau = a.mau * b.mau;
    long long ucln = __gcd(sum.tu, sum.mau);
    sum.tu /= ucln;
    sum.mau /= ucln;
    return sum;
  }
  friend ostream& operator<< (ostream &os, PhanSo const&ps){
    os << ps.tu << "/" << ps.mau;
    return os;
  }
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}