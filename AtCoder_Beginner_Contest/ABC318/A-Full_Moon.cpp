#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N,M,P;
  cin >> N >> M >> P;
  int day = 0;
  int ans = 0;
  while(day <= N){
    if(ans == 0){
      day += M;
    }
    else{
      day += P;
    }
    if(day <= N) ans++;
  }
  cout << ans << endl;
}