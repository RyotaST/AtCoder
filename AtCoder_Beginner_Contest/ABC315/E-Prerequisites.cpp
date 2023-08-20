#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N;
  cin >> N;
  vector<vector<int>> book(N+1,vector<int>());
  rep(i,1,N+1){
    int C;
    cin >> C;
    rep(j,0,C){
      int P;
      cin >> P;
      book[i].push_back(P);
    }
  }
  queue<vector<int>> que;
  stack<int> sta;
  set<int> s;
  que.push({1});
  while(!que.empty()){
    vector<int> v = que.front();
    que.pop();
    rep(i,0,v.size()){
      if(!(s.count(v[i]))){
        que.push(book[v[i]]);
        if(v[i] != 1)sta.push(v[i]);
        s.insert(v[i]);
      }
    }
  }
  while(!sta.empty()){
    cout << sta.top();
    sta.pop();
    if(!sta.empty()) cout << " ";
    else cout << endl;
  }
}