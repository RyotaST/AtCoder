#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> A(N);
  map<int, long long> box;
  long long ans = 0;
  for(int i=0;i<N;i++){
    cin >> A.at(i);
    if(box.count(A.at(i)%200)){
      box.at(A.at(i)%200) += 1;
    }
    else{
      box[A.at(i)%200] = 1;
    }
  }
  for(auto p: box){
    auto key = p.first;
    auto value = p.second;
    ans += (value*(value-1)/2);
  }
  cout << ans << endl;
}
