#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N,M;
  cin >> N >> M;
  vector<vector<int>> T(N, vector<int>(M));
  rep(i,0,N) rep(j,0,M) cin >> T.at(i).at(j);
  long long ans = 0;
  rep(i,0,M){
    vector<int> one(N);
    rep(j,0,N){
      one.at(j) = T.at(j).at(i);
    }
    rep(k,i+1,M){
      long long val = 0;
      vector<int> two(N);
      rep(l,0,N){
        two.at(l) = T.at(l).at(k);
      }
      rep(m,0,N) val += max(one.at(m),two.at(m));
      if(val > ans) ans = val;
    }
  }
  cout << ans << endl;
}