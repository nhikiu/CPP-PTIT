#include<bits/stdc++.h>

using namespace std;

int main() {
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int found = s1.find(s2);
	if(found != string::npos) {
		s1.replace(found, s2.length(), "");
		cout << s1;
	}
	return 0;
}
