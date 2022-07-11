#include<iostream>
#include<cmath>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int check[n+5];
		for(int i = 2; i <= n; i++){
			check[i] = 1;
		}
		for(int i = 2; i <= n; i++){
			if(check[i] == 1){
				for(int j = 2*i; j <= n; j += i){
					check[j] = 0;
				}
			}
		}
		for(int i = 2; i <= n; i++){
			if(check[i] == 1) cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}



