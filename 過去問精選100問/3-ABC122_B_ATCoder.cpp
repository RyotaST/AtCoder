#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int ans = 0;
  for(int i=1;i<=S.size();i++){
    for(int j=0;j<S.size()-i+1;j++){
      bool flg = true;
      string T = S.substr(j,i);
      for(int k=0;k<T.size();k++){
        if(T.at(k) == 'A' || T.at(k) == 'G' || T.at(k) == 'C' || T.at(k) == 'T'){
          continue;
        }
        else{
          flg = false;
          break;
        }
      }
      if(flg) ans = max(ans, (int)T.size());
    }
  }
  cout << ans << endl;
}