#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  char s[100];
  cin >> t;
  while(t--) {
    cin.ignore();
    cin >> s;
    int n = strlen(s), count = 1;

    for (int i = 1; i <= n; i++)
    {
      if (s[i - 1] == s[i]) count++;
      else
      {
        cout << s[i - 1] << count;
        count = 1;
      }
    }

    cout << endl;
  }
  return 0;
}