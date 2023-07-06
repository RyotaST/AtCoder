#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<char> S(N);
  for(int i=0;i<N;i++){
    cin >> S.at(i);
    cout << S.at(i) << S.at(i);
  }
}