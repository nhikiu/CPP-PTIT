#include<bits/stdc++.h>

using namespace std;

int main()
{
  char s[200];
  cin >> s;
  int n = strlen(s);
  for (int i = 0; i < n; i++)
  {
    s[i] = tolower(s[i]);
    if (s[i] != 'a' && s[i] != 'i' && s[i] != 'e' && s[i] != 'u' && s[i] != 'o' && s[i] != 'y')
    {
      cout << "." << s[i];
    }
  }
  return 0;
}