#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M;
  int sum = 0;
  cin >> N >> M;
  vector<string> C(N);
  vector<string> D(M);
  vector<int> P(M+1);
  vector<pair<int,string>> p;
  for(int i=0; i<N; i++){
    cin >> C.at(i);
  }
  for(int i=0; i<M; i++){
    cin >> D.at(i);
  }
  
  for(int i=0; i<M+1; i++){
    int a;
    cin >> a;
    if(i==0){
      p.push_back(make_pair(a, ""));
    }
    else{
      p.push_back(make_pair(a, D.at(i-1)));
    }
  }
  for(int i=0; i<N; i++){
    for(int j=0; j<M+1; j++){
      int num;
      if(C.at(i) == p.at(j).second){
        sum += p.at(j).first;
        break;
      }
      if(j == M){
        sum += p.at(0).first;
      }
    }
  }
  cout << sum << endl;
}
