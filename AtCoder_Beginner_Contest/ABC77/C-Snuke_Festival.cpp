#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> B(N);
  vector<int> C(N);
  for(int i=0;i<N;i++) cin >> A.at(i);
  for(int i=0;i<N;i++) cin >> B.at(i);
  for(int i=0;i<N;i++) cin >> C.at(i);
  sort(A.begin(),A.end());
  sort(B.begin(),B.end());
  sort(C.begin(),C.end(), greater<int>());
  
  long long ans = 0;
  for(int i=0;i<N;i++){
    auto a_num = lower_bound(A.begin(),A.end(), B.at(i));
    auto c_num = upper_bound(C.rbegin(),C.rend(),B.at(i));
    long long siz_a = distance(A.begin(), a_num);
    long long siz_c = distance(C.rbegin(), c_num);
    ans += (siz_a*(N-siz_c));
  }
  cout << ans << endl;
}