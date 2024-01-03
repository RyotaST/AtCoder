#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N;
  cin >> N;
  string s;
  s = to_string(N);
  rep(i,0,N){
    s += s;
  }
  cout << s << endl;
}