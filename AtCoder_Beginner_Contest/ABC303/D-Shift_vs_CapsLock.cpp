#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  long long X,Y,Z;
  cin >> X >> Y >> Z;
  string S;
  cin >> S;
  vector<vector<long long>> dp(S.size()+1,vector<long long>(2,LLONG_MAX));
  dp[0][0] = 0;
  dp[0][1] = Z;
  //bool caps = false;
  rep(i,0,S.size()){
    if(S[i] == 'A'){
      dp[i+1][0] = min(min(dp[i][0]+Y,dp[i][1]+X+Z),dp[i][1]+Y+Z);
      dp[i+1][1] = min(min(dp[i][1]+X,dp[i][0]+Y+Z),dp[i][0]+X+Z);
    }
    else{
      dp[i+1][0] = min(min(dp[i][0]+X,dp[i][1]+Y+Z),dp[i][1]+X+Z);
      dp[i+1][1] = min(min(dp[i][1]+Y,dp[i][0]+X+Z),dp[i][0]+Y+Z);
    }
  }
  cout << min(dp[S.size()][0],dp[S.size()][1]) << endl;
}