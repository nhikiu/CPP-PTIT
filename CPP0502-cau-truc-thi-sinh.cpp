#include <bits/stdc++.h>

using namespace std;

struct ThiSinh{
	string name, birthday;
  float d1, d2, d3;
};

void nhap (ThiSinh &A)
{
	getline(cin, A.name);
  getline(cin, A.birthday);
  cin >> A.d1 >> A.d2 >> A.d3;
}

void in (ThiSinh &A)
{
	cout << A.name << " " << A.birthday << " " << fixed << setprecision(1) <<A.d1 + A.d2 + A.d3;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}