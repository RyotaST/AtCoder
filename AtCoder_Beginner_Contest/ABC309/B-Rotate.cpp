#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<string> s(N);
  vector<vector<int>> grid(N,vector<int>(N));
  vector<vector<int>> ans(N,vector<int>(N));
  for(int i=0;i<N;i++){
    cin >> s.at(i);
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      grid.at(i).at(j) = (int)(s.at(i).at(j)-'0');
    }
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(i==0){
        if(j == 0){
          ans.at(0).at(j) = grid.at(1).at(0);
        }
        else{
          ans.at(i).at(j) = grid.at(i).at(j-1);
        }
        //一列目と最終行の処理
      }
      else if(i == N-1){
        if(j == N-1){
          ans.at(N-1).at(N-1) = grid.at(N-2).at(N-1);
        }
        else{
          ans.at(N-1).at(j) = grid.at(N-1).at(j+1);
        }
      }
      else{
        if(j == 0){
          ans.at(i).at(0) = grid.at(i+1).at(0);
        }
        else if(j == N-1){
          ans.at(i).at(N-1) = grid.at(i-1).at(N-1);
        }
        else{
          ans.at(i).at(j) = grid.at(i).at(j);
        }
      }
    }
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cout << ans.at(i).at(j);
      if(j%N == N-1){
        cout << endl;
      }
    }
  }
}