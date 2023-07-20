#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  set<string> set_check;
  set<string> box;
  cin>> N;
  int count = N;
  vector<string> S(N);
  for(int i=0;i<N;i++){
    cin >> S.at(i);
  }
  for(int i=0;i<N-1;i++){
    for(int j=i+1;j<N;j++){
      if(set_check.count(S.at(i))){
        continue;
      }
      string s = S.at(i);
      reverse(s.begin(), s.end());
      if(S.at(i) == S.at(j) || s == S.at(j)){
        box.insert(S.at(i));
        box.insert(s);
        count--;
      }
    }
    for(auto x:box){
      set_check.insert(x);
    }
  }
  cout << count << endl;
}