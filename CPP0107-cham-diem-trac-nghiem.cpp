#include <bits/stdc++.h>
using namespace std;

char ma101[15]= {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'}; 
char ma102[15]= {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};

int main (){
	int t;
	cin >> t;
	while (t--){
		long long n, c1 = 0, c2 = 0;
		char a[15];
		cin >> n;
		for(int i = 0; i < 15; i++){
			cin >> a[i];
			if(a[i] == ma101[i]) c1++;
			if(a[i] == ma102[i]) c2++;
		} 
		if(n == 101) cout << fixed << setprecision(2) << (float) c1 * 2/3 << endl;
		else if(n == 102) cout << fixed << setprecision(2) << (float) c2 * 2/3 << endl;
	}
	return 0;
}
