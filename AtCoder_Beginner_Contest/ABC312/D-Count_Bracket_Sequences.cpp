#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  long long ans = 0;
  vector<vector<long long>> dp(3001,vector<long long>(3001));
  dp.at(0).at(0) = 0;
  for(int i=0;i<(int)S.size();i++){
    if(S.at(i) == '('){
      dp.at(i+1).at(i+1) += dp.at(i).at(i)+1;
    }
    else if(S.at(i) == ')'){
      dp.at(i+1).at(i-1) += dp.at(i).at(i);
    }
    else if(S.at(i) == '?'){
      dp.at(i+1).at(i+1) += dp.at(i).at(i)

    }
    if(dp.at(i).at())
    if(dp.at(i).at(1) > dp.at(i).at(0)){
      cout << 0 << endl;
      return 0;
    }
  }
}