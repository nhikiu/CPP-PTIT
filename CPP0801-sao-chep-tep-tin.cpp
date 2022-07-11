//CPP0801 - SAO CHÉP TỆP TIN
#include <bits/stdc++.h>
using namespace std;

int main(){
  ifstream input;
  ofstream output;
  input.open("PTIT.in");
  output.open("PTIT.out");
  while(!input.eof()){
    string s;
    getline(input, s);
    output << s << endl;
  }
  input.close();
  output.close();
}