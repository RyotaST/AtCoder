#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N1,N2,M;
  cin >> N1 >> N2 >> M;
  vector<vector<int>> ab(N1+N2+1,vector<int>());
  queue<int> que;
  rep(i,0,M){
    int a,b;
    cin >> a >> b;
    ab[a].push_back(b);
    ab[b].push_back(a);
  }
  vector<int> dist(N1+N2+1,-1);
  dist[1] = 0;
  que.push(1);
  while(!que.empty()){
      int v = que.front();
      que.pop();
      for(auto el: ab[v]){
        if(dist[el] == -1){
          dist[el] = dist[v]+1;
          que.push(el);
        }
      }
  }
  int max1 = *max_element(dist.begin(),dist.end());
  que.push(N1+N2);
  dist.assign(N1+N2+1,-1);
  dist[N1+N2] = 0;
  while(!que.empty()){
    int v = que.front();
    que.pop();
    for(auto el: ab[v]){
      if(dist[el] == -1){
        dist[el] = dist[v]+1;
        que.push(el);
      }
    }
  }
  int max2 = *max_element(dist.begin(),dist.end());
  cout << max1+max2+1 << endl;
}