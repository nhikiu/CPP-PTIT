//CPP0319 - NHỎ NHẤT - LỚN NHẤT
#include <bits/stdc++.h>
using namespace std;
vector<int> min_number, max_number;

void so_nho_nhat(int m, int s){
  int i, n = m;
  if(s > 9 * m || (s == 0 && m > 1)) min_number.push_back(-1);
  else{
    for(int j = 0; j < n - 1; j++){
      if(j == 0 && s != 0) i = 1;
      else i = 0;
      while((s - i) / (m - 1) + ((s - i) % (m - 1) != 0) > 9) i++;
      min_number.push_back(i);
      m--;
      s -= i;
    }
    min_number.push_back(s);
  }
}

void so_lon_nhat(int m, int s){
  int i, n = m;
  if(s > 9 * m || (s == 0 && m > 1)) max_number.push_back(-1);
  else{
    for(int j = 0; j < n; j++){
      i = 9;
      while (s - i < 0) i--;
      max_number.push_back(i);
      m--;
      s -= i;
    }
  }
}

int main(){
  int m, s;
  cin >> m >> s;
  so_nho_nhat(m, s);
  so_lon_nhat(m, s);
  for(int i = 0; i < min_number.size(); i++) cout << min_number[i];
  cout << " ";
  for(int i = 0; i < max_number.size(); i++) cout << max_number[i];
}