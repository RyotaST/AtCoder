#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> A(64);
  unsigned long long ans = 0;
  for(int i=0; i<64; i++){
    cin >> A.at(i);
    if(A.at(i) == 1){
      ans += (unsigned long long)pow(2,i);
    }
  }
  cout << ans << endl;
}