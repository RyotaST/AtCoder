#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N;
  cin >> N;
  vector<int> P(N);
  int aa = 0;
  rep(i,0,N) cin >> P.at(i);
  rep(i,1,N){
    aa = max(aa, P.at(i));
  }
  if(P.at(0) > aa){
    cout << 0 << endl;
  }
  else{
    cout << (aa - P.at(0))+1 << endl;
  }
}