#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> A(M);
  vector<int> B(M);
  vector<bool> flg(M,false);
  flg.at(0) = true;
  rep(i,0,M){
    cin >> A.at(i) >> B.at(i);
  }
  deque<int> aa;
  aa.push_back(A.at(i), B.at(i));
  bool check = true;
  while(check){
    rep(i,1,N){
      if(i == 1){
        check == false;
      }
      if(A.at(i) == aa.back()){
        aa.push_back(A.at(i));
        aa.push_back(B.at(i));
        aa.erase(i);
        check == true;
      }
      else if(B.at(i) == aa.front()){
        aa.push_front(B.at(i));
        aa.push_front(A.at(i));
        aa.erase(i);
        check == true;
      }
    }
  }
  if(aa.size == 0){
    cout << aa.front() << endl;
  }
  else{
    cout << -1 << endl;
  }
}