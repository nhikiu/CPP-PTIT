#include <bits/stdc++.h>
using namespace std;
void xuly()
{
	string s;
	getline(cin,s);
	int n=s.size(),s1=1;
	for(int i = 1 ; i < n ; i++ )
	{
		if((s[i-1]==' '||s[i-1]=='\t') && s[i]>='a' && s[i]<='z') s1++;
	}
	cout<<s1<<endl;
}
int main()
{
	int t;
	cin >> t;
	while ( t-- )
	{
		cin.ignore();
		xuly();
	}
	return 0;
}
