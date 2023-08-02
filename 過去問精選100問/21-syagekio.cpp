#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<long long> baloon(N,vector<long long>(2));
  vector<long long> ans(N);
  for(int i=0;i<N;i++){
    cin >> baloon.at(i).at(0);
    cin >> baloon.at(i).at(1);
    ans.at(i) = baloon.at(i).at(0)+baloon.at(i).at(1)*(N-1);
  }
  sort(ans.begin(),ans.end());
  cout << ans.at(N-1) << endl;
}