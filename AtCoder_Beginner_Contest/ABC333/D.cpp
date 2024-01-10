#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int tree_function(int a, int& count, vector<vector<int>> tree){
  rep(i,0,tree[a].size()){
    count++;
    tree_function(tree[a][i], count, tree);
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
  }

  int ans = 1e9;
  int count = 0;
  vector<bool> flg(true, N+1);
  rep(i,0,tree[1].size()){
    count = 0;
    count = tree_function(tree[1][i], count, tree);
    if(count+1 < ans) ans = count+1;
  }
  cout << ans << endl;
}