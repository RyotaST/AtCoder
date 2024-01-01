#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N;
  cin >> N;
  vector<vector<int>> ABCD(N,vector<int>(4));
  vector<vector<bool>> flg(101,vector<bool>(101,false));
  int ans = 0;
  rep(i,0,N){
    cin >> ABCD[i][0] >> ABCD[i][1] >> ABCD[i][2] >> ABCD[i][3];
  }
  rep(i,0,N){
    rep(j,ABCD[i][0],ABCD[i][1]){
      rep(k,ABCD[i][2],ABCD[i][3]){
        if(flg[j][k] == false) ans++;
        flg[j][k] = true;
      }
    }
  }
  cout << ans << endl;
}