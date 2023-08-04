#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N;
  string S;
  cin >> N >> S;
  int ans = 0;
  rep(i,0,10){
    int pos_i = -1;
    rep(j,0,N-2){
      if(S.at(j)-'0' == i){
        pos_i = j;
        break;
      }
    }
    if(pos_i != -1){
      rep(k,0,10){
        int pos_k = -1;
        rep(l,pos_i+1,N-1){
          if(S.at(l)-'0' == k){
            pos_k = l;
            break;
          }
        }
        if(pos_k != -1){
          rep(m,0,10){
            rep(n,pos_k+1,N){
              if(S.at(n)-'0' == m){
                ans += 1;
                break;
              }
            }
          }
        }
        else{
          continue;
        }
      }
    }
    else{
      continue;
    }
  }
  cout << ans << endl;
}