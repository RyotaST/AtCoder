#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  string S;
  cin >> S;
  rep(i,0,S.size()){
    if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u'){
      continue;
    }
    else{
      cout << S[i];
    }
  }
  cout << endl;
}