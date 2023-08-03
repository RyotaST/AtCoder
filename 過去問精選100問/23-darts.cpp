#include <bits/stdc++.h>
using namespace std;

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f) {
  if (rest == 0) {
    f(indexes);
  } else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}

// nCkの組み合わせに対して処理を実行する
void foreach_comb(int n, int k, std::function<void(int *)> f) {
  int indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> P;
  for(int i=0;i<N;i++) cin >> P.at(i);
  long long right = 1e18;
  long long left = 0;
  while(left+1<right){
    bool ok = true;
    mid = (right + left)/2;
    if(mid > M) ok = false;
    long long check = -1;
    long long total = 0;
    for(int i=1;i<4;i++){
      foreach_comb(N,i,[](int *P){
        for(int j=0;j<i;j++){
          total += indexes.at(j);
          if(j == i-1){
            if(check <= M){
              check = max(check, total);
            }
          }
        }
      });
      if()
    }
  }
}