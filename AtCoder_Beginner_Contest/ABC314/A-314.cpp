#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N;
  cin >> N;
  string s = "1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
  cout << "3."+s.substr(0,N) << endl;
  return 0;
}