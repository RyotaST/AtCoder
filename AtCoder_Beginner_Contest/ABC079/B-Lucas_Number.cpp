#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int64_t> L(N+1);
  L.at(0) = 2;
  L.at(1) = 1;
  if(N == 1){
    cout << 1 << endl;
  }
  else{
    for(int i=2; i<L.size(); i++){
      L.at(i) = L.at(i-2)+L.at(i-1);
      if(i == L.size()-1){
        cout << L.at(i) << endl;
      }
    }
  }
}