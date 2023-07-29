#include <bits/stdc++.h>
using namespace std;

int count(int n, int m,vector<string> &S){
  if(flg(n,m)){
    if(check(n-1,m, ya) || check(n,m-1) || check(n+1,m) || check(n,m+1)){

    }
  }
}

bool check(int n, int m, int ya, int &count){
  int a;
  if(ya = 0){
    a = n;
    while(S.at(a).at(m) == '#'){
      if(flg.at(a).at(m)) == true){
        flg.at(a).at(m) = false;
        count += 1;
        a = n-1;
      }
      else{
        break;
      }
    }
  }
  if(ya = 1){
    a = m;
    while(S.at(n).at(a) == '#'){
      if(flg.at(n).at(a)) == true){
        flg.at(n).at(a) = false;
        count += 1;
        a = m+1;
      }
      else{
        break;
      }
    }
  }
  if(ya = 2){
    a = n;
    while(S.at(a).at(m) == '#'){
      if(flg.at(a).at(m)) == true){
        flg.at(a).at(m) = false;
        count += 1;
        a = n+1;
      }
      else{
        break;
      }
    }
  if(ya = 2){
    a = m;
    while(S.at(n).at(a) == '#'){
      if(flg.at(n).at(a)) == true){
        flg.at(n).at(a) = false;
        count += 1;
        a = m-1;
      }
      else{
        break;
      }
    }
  }
}

int main() {
  int N,M;
  cin >> N >> M;
  vector<string> S(N);
  vector<vector<bool>> flg(N, <vector<bool>(M, true)>)
  for(int i=0;i<N;i++){
    cin >> S.at(i);
  }
  check(1,1);
}
