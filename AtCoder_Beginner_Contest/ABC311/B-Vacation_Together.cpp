#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,D;
  cin >> N >> D;
  vector<string> S(N);
  int count_cont = 0;
  int max = 0;
  for(int i=0;i<N;i++){
    cin >> S.at(i);
  }
  for(int i=0;i<D;i++){
    int count_o = 0;
    for(int j=0;j<N;j++){
      if(S.at(j).at(i) == 'o'){
        count_o += 1;
        if(count_o == N){
          count_cont += 1;
          if(count_cont > max){
            max = count_cont;
          }
        }
      }
      else{
        count_cont = 0;
        break;
      }
    }
  }
  cout << max << endl;
}
