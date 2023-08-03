#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  long long ans;
  vector<long long> H(N),S(N);
  for(int i=0;i<N;i++){
    cin >> H.at(i);
    cin >> S.at(i);
  }
  long long right = 1e9+1;
  long long left = 0;
  while(left+1 < right){
    long long mid = (right + left) / 2;
    bool ok = true;
    vector<long long> t(N,0);
    for(int i=0;i<N;i++){
      if(mid < H.at(i)){
        ok = false;
      }
      else{
        t.at(i) = (mid-H.at(i))/S.at(i);
      }
    }
    sort(t.begin(),t.end());
    for(int i=0;i<N;i++){
      if(t.at(i) < i){
        ok = false;
      }
    }
    if(ok){
      right = mid;
    }
    else{
      left = mid;
    }
  }
  cout << right << endl;
}