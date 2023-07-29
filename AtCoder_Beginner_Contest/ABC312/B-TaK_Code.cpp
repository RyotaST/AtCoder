#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;
  vector<string> S(N);
  for(int i=0;i<N;i++){
    cin >> S.at(i);
  }
  for(int i=0;i<(N-8);i++){
    for(int j=0;j<(M-8);j++){
      int a = 0;
      bool flg = false;
      if(i+1 == 10 && j+1 == 2){
      }
      for(int k=i;k<i+9;k++){
        int b = 0;
        for(int l=j;l<j+9;l++){
          if(a<3 && b<3){
            if(S.at(k).at(l) == '#'){
              flg = true;
            }
            else{
              flg = false;
            }
          }
          else if((a == 5 && b > 5) || (b == 5 && a > 5) || (a == 5 && b == 5)){
            if(S.at(k).at(l) == '.'){
              flg = true;
            }
            else{
              flg = false;
            }
          }
          else if(a >= 6 && b >= 6){
            if(S.at(k).at(l) == '#'){
              flg = true;
            }
            else{
              flg = false;
            }
          }
          else if((a == 5 && b > 4) || (b == 5 && a > 4)){
            if(S.at(k).at(l) == '.'){
              flg = true;
            }
            else{
              flg = false;
            }
          }
          b++;
          if(flg == false){
            break;
          }
        }
        a++;
        if(a == 9 && b == 9){
          if(flg){
            cout << i+1 << " " << j+1 << endl;
          }
        }
        if(flg == false){
          break;
        }
      }
    }
  }
}