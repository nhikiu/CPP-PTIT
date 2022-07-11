#include<bits/stdc++.h>
using namespace std;

struct ToaDo{
  int x, y, z;
};


int main(){
  int t;
  cin >> t;
  while(t--){
    ToaDo s[4];
    for(int i = 0; i < 4; i++) cin >> s[i].x >> s[i].y >> s[i].z;
    ToaDo tich, tich1;
    tich.x = (s[1].y - s[0].y) * (s[2].z - s[0].z) - (s[2].y - s[0].y) * (s[1].z - s[0].z);
    tich.y = (s[2].x - s[0].x) * (s[1].z - s[0].z) - (s[1].x - s[0].x) * (s[2].z - s[0].z);
    tich.z = (s[2].y - s[0].y) * (s[1].x - s[0].x) - (s[1].y - s[0].y) * (s[2].x - s[0].x);

    tich1.x = s[3].x - s[0].x;
    tich1.y = s[3].y - s[0].y;
    tich1.z = s[3].z - s[0].z;
    if(tich.x * tich1.x + tich.y * tich1.y + tich.z * tich1.z == 0) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}