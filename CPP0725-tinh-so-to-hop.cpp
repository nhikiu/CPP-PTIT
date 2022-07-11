//CPP0725 - TÍNH SỐ TỔ HỢP
#include<bits/stdc++.h>
#define MAX 1000000007
using namespace std;

long long a[1001][1001];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin >> n >> k;
		for(int i = 0 ; i <= 1000; i++){
			for(int j = 0; j <= i; j++){
				if(i == j ||j == 0){
					a[i][j] = 1;
				}
        else{
					a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
					a[i][j] %= MAX;
				}
			}
		}
		cout << a[n][k] << endl;
	}
}