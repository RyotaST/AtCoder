#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int ans = 0;
  for(int i=1;i<=N;i++){
    int y = 0;
    if(i%2 == 0){
      continue;
    }
    for(int j=1;j<=i;j++){
      if(i%j == 0){
        y += 1;
      }
      if(y == 8) ans += 1;
    }
  }
  cout << ans << endl;
}