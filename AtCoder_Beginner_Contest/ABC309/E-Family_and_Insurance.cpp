#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> p(N-1);
  vector<pair<int, int>> xy;
  vector<vector<int>> G(N+1,vector<int>());
  vector<int> covered(N, 0);
  rep(i,0,N-1) cin >> p[i];
  rep(i,0,M){
    int x,y;
    cin >> x >> y;
    xy.push_back(make_pair(x,y));
  }
  sort(xy.begin(),xy.end());
  rep(i,0,M){
    cout << xy[i].first << " " << xy[i].second << endl;
  }
  G[0].push_back(0);
  rep(i,0,N-1){
    G[p[i]].push_back(i+2);
  }

  queue<pair<int, int>> que;
  rep(i,0,M){
    que.push({xy[i].first, xy[i].second});
    while(!que.empty()){
      int v = que.front().first;
      int depth = que.front().second;
      que.pop();
      if (depth < 0) continue;
      covered[v-1] = 1;
      for (int child : G[v]) {
        que.push({child, depth-1});
      }
    }
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (covered[i]) ans++;
  }
  
  cout << ans << endl;
}
