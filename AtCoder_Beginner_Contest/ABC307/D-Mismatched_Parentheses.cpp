#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N;
  cin >> N;
  string s;
  vector<int> dp(N+1);
  cin >> s;
  dp[0] = 0;
  string ans = "";
  int count = 0;
  for(int i=0;i<s.size();i++){
    if(s[i] == '('){
      count += 1;
      dp[count] = i+1;
      ans += s[i];
    }
    else if(s[i] == ')' && count >= 1){
      ans.erase(dp[count]-1,ans.size()-1);
      count--;
    }
    else{
      ans += s[i];
    }
  }
}