#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)
using Graph = vector<string>;

int main() {
    // 頂点数と辺数
    int N, M; cin >> N >> M;

    // グラフ入力受取 (ここでは無向グラフを想定)
    Graph G;
    G.push_back("");
    for (int i = 1; i <= N; ++i) {
        string s;
        cin >> s;
        s = " "+s;
        G.push_back(s);
    }

    // BFS のためのデータ構造
    vector<vector<vector<int>>> dist(N+1, vector<vector<int>>(M+1,vector<int>(5,-1))); // 全頂点から4方向を「未訪問」に初期化
    queue<pair<int, int>> que;

    // 初期条件 (頂点 0 を初期ノードとする)
    dist[2][2][4] = 0;
    que.push(make_pair(2,2)); // 0 を橙色頂点にする
    long long ans = 1;

    // BFS 開始 (キューが空になるまで探索を行う)
    while (!que.empty()) {
        pair<int,int> v = que.front(); // キューから先頭頂点を取り出す
        que.pop();

        // v から辿れる頂点をすべて調べる
        for(int i=0;i<4;i++){
          if(dist[v.first][v.second][i] != -1) continue; // すでに発見済みの頂点は探索しない

          // 新たな上方向の頂点について距離情報を更新してキューに追加する
          if(i == 0){
            dist[v.first][v.second][0] = 0;
            for(int j=(v.first-1);j>0;j--){
              if(G[j][v.second] == '.'){
                if(dist[j][v.second][4] == -1) ans += 1;
                dist[v.first][v.second][0] += 1;
                dist[j][v.second][4] = 0;
              }
              else{
                if(j != (v.first-1)) que.push(make_pair(j+1,v.second));
                break;
              }
            }
          }

          if(i == 1){
            dist[v.first][v.second][1] = 0;
            for(int j=(v.second+1);j<=M;j++){
              if(G[v.first][j] == '.'){
                if(dist[v.first][j][4] == -1) ans += 1;
                dist[v.first][v.second][1] += 1;
                dist[v.first][j][4] = 0;
              }
              else{
                if(j != (v.second+1)) que.push(make_pair(v.first,j-1));
                break;
              }
            }
          }

          if(i == 2){
            dist[v.first][v.second][2] = 0;
            for(int j=(v.first+1);j<=N;j++){
              if(G[j][v.second] == '.'){
                if(dist[j][v.second][4] == -1) ans += 1;
                dist[v.first][v.second][2] += 1;
                dist[j][v.second][4] = 0;
              }
              else{
                if(j != (v.first+1)) que.push(make_pair(j-1,v.second));
                break;
              }
            }
          }

          if(i == 3){
            dist[v.first][v.second][3] = 0;
            for(int j=(v.second-1);j>0;j--){
              if(G[v.first][j] == '.'){
                if(dist[v.first][j][4] == -1) ans += 1;
                dist[v.first][v.second][3] += 1;
                dist[v.first][j][4] = 0;
              }
              else{
                if(j != (v.second-1)) que.push(make_pair(v.first,j+1));
                break;
              }
            }
          }
        }
    }

    // 結果出力 (各頂点の頂点 0 からの距離を見る)
    cout << ans << endl;
}
