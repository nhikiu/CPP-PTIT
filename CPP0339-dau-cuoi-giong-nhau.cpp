#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--) {
    cin.ignore();
    string s;
    cin >> s;
    int n = s.size();
    int count = n;
    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        if (s[i] == s[j]) count++;
      }
    }
    cout << count << endl;
  }
  return 0;
}