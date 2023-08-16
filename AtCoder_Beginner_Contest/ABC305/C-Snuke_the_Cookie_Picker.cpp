#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int H,W;
  cin >> H >> W;
  vector<string> S(H+2);
  rep(i,0,W+2){
    S[0].push_back('1');
  }
  rep(i,1,H+1){
    string ss;
    cin >> ss;
    S[i] = "1"+ss+"1";
  }
  rep(i,0,W+2){
    S[H+1].push_back('1');
  }
  int i_ans,j_ans;
  rep(i,0,H+2){
    rep(j,0,W+2){
      if(S[i][j] == '.'){
        int count = 0;
        if(S[i-1][j] == '#') count++;
        if(S[i][j+1] == '#') count++;
        if(S[i+1][j] == '#') count++;
        if(S[i][j-1] == '#') count++;
        if(count >= 2){
          i_ans = i;
          j_ans = j;
        }
      }
    }
  }
  cout << i_ans << " " << j_ans << endl;
}