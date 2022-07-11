#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
  long long tu, mau;
};

void rutgon(long long a, long long b) {
  long long ucln = __gcd(a,b);
  cout << a/ucln << "/" << b/ucln << " ";
}

void ans(PhanSo A, PhanSo B) {
  PhanSo C, D;
  C.tu = A.tu * A.tu * B.mau * B.mau + 2 * A.tu * A.mau * B.tu * B.mau + A.mau * A.mau * B.tu * B.tu;
  C.mau = A.mau * A.mau * B.mau * B.mau;
  rutgon(C.tu, C.mau);
  D.tu = A.tu * B.tu * C.tu;
  D.mau = A.mau * B.mau * C.mau;
  rutgon(D.tu, D.mau);
}

void process(PhanSo A, PhanSo B) {
  ans(A,B);
  cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}