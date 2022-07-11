#include <bits/stdc++.h>

using namespace std;

struct PhanSo{
	long long tu, mau;
};

void nhap (PhanSo &p)
{
	cin >> p.tu >> p.mau;
}

PhanSo tong (PhanSo &p, PhanSo &q)
{
  PhanSo sum;
  sum.tu = p.tu * q.mau + p.mau * q.tu;
  sum.mau = p.mau * q.mau;
	long long ucln = __gcd(sum.tu, sum.mau);
	sum.tu /= ucln;
	sum.mau /= ucln;
  return sum;
}

void in (PhanSo &t)
{
	cout << t.tu << "/" << t.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}