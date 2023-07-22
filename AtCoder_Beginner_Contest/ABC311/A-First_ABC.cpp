#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int ans = 0;
  string S;
  cin >> N >> S;
  bool a = false;
  bool b = false;
  bool c = false;
  for(int i=0;i<N;i++){
    if(S.at(i) == 'A'){
      a = true;
    }
    if(S.at(i) == 'B'){
      b = true;
    }
    if(S.at(i) == 'C'){
      c = true;
    }
    if(a && b && c){
      cout << i+1 << endl;
      break;
    }
  }
}
