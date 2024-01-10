#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int tree_function(int a, vector<vector<int>>& tree, vector<bool>& flg){
  int count = 1;
  flg[a] = false;
  rep(i,0,tree[a].size()){
    if(flg[tree[a][i]] == false){
      continue;
    }
    count += tree_function(tree[a][i], tree, flg);
  }
  return count;
}

int main(){
  int N;
  vector<vector<int>> uv;
  cin >> N;
  rep(i,0,N-1){
    int u,v;
    cin >> u >> v;
    uv.push_back({u,v});
  }
  vector<vector<int>> tree(N+1);
  rep(i,0,N-1){
    tree[uv[i][0]].push_back(uv[i][1]);
    tree[uv[i][1]].push_back(uv[i][0]);
  }

  int max = 0;
  int count = 0;
  vector<bool> flg(N+1, true);
  flg[1] = false;
  rep(i,0,tree[1].size()){
    count = tree_function(tree[1][i], tree, flg);
    if(count > max) max = count;
  }
  cout << N-max << endl;
}