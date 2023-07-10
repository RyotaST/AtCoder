#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<vector<long long>>dp(N, vector<long long>(2));
  vector<vector<long long>>value(N, vector<long long>(2));
  dp.at(0).at(0) = 0;
  for(int i=1;i<=N;i++){
    int a,b;
    cin >> a >> b;
    value.at(i).at(0) = a;
    value.at(i).at(1) = b;
  }
  for(int i=0;i<N;i++){
    if(value.at(i).at(0) == 1){
      dp.at(i+1).at(1) = max(dp.at(i).at(1), dp.at(i).at(0)+value.at(i).at(1));
    }
    else{
      dp.at(i+1).at(0) = max(dp.at(i).at(0),dp.at(i).at(1)+value.at(i).at(1))
    }
  }
  cout << ans << endl;
}