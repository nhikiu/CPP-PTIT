//CPP0747 - LOẠI BỎ 100
#include<bits/stdc++.h>
using namespace std;

void solve(string s){
	int count = 0;
	int index = s.find("100", 0);
	if(index != -1){
		count += 3;
		s.erase(s.find("100", 0), 3);
		while(s.find("100", 0) != -1 && s.find("100", 0) <= index){
			count += 3;
			index = s.find("100", 0);
			s.erase(s.find("100", 0), 3);
		}
	}
	if(count > 0) cout << count << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		solve(s);
	}
	return 0;
}