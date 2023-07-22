#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N+1);
  A.at(0) = 1;
  int a = 0;
  set<int> s = {};
  int num;
  int ans;
  queue<int> q;
  bool flg = false;
  for(int i=1;i<N+1;i++){
    cin >> A.at(i);
  }
  while(1){
    if(s.count(A.at(a))){
      num = A.at(a);
      break;
    }
    else{
      s.insert(A.at(a));
      q.push(A.at(a));
    }
    a = A.at(a);
  }
  while(!q.empty()){
    if(q.front() == num){
      cout << q.size() << endl;
      flg = true;
    }
    if(flg){
      cout << q.front();
      if(q.size() == 1){
        cout << endl;
      }
      else{
        cout << " ";
      }
    }
    q.pop();
  }
}
