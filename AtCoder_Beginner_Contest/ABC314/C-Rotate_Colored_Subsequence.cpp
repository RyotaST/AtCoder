#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N,M;
  string S;
  cin >> N >> M >> S;
  vector<int> C(N);
  vector<queue<int>> que(M);
  rep(i,0,N){
    cin >> C[i];
    que[C[i]-1].push(S[i]);
  }
  rep(i,0,M){
    rep(j,0,que[i].size()-1){
      int v = que[i].front();
      que[i].pop();
      que[i].push(v);
    }
  }
  string ans = "";
  rep(i,0,N){
    ans += que[C[i]-1].front();
    que[C[i]-1].pop();
  }
  cout << ans << endl;
}