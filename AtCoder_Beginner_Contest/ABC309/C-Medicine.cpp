#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N,K;
  cin >> N >> K;
  vector<pair<long, long>> medi(N);
  long long num = 0;
  long long ans = 0;
  for(int i=0;i<N;i++){
    long long a,b;
    cin >> a >> b;
    num += b;
    medi.at(i) = make_pair(a,b);
  }
  sort(medi.begin(), medi.end());
  if(num <= K){
    cout << 1 << endl;
  }
  else{
  	for(int i=0;i<N;i++){
      num -= medi.at(i).second;
      if(num <= K){
        ans = medi.at(i).first;
        break;
      }
    }
    cout << ans+1 << endl;
  }
}