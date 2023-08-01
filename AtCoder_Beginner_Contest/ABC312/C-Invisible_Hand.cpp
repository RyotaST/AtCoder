#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N,M;
  long long ans;
  cin >> N >> M;
  vector<long long> A(N);
  vector<long long> B(M);
  for(int i=0;i<N;i++) cin >> A.at(i);
  for(int i=0;i<M;i++) cin >> B.at(i);
  sort(A.begin(),A.end());
  sort(B.begin(),B.end());
  ans = 1e9+1;
  for(int i=0;i<N;i++){
    auto A_it = upper_bound(A.begin(), A.end(), A.at(i));
    long long siz_A = distance(A.begin(), A_it); 
    auto B_it = lower_bound(B.begin(), B.end(), A.at(i));
    long long siz_B = M - distance(B.begin(), B_it);
    long long bb = B.at(M-1-i)+1;
    if(siz_A >= siz_B){
      long long aa = A.at(i);
      ans = min(aa, bb);
      break;
    }
    else{
      ans = min(ans,bb);
    }
  }
  cout << ans << endl;
}