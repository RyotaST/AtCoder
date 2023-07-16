#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,P,Q;
  cin >> N >> P >> Q;
  vector<int> D(N);
  for(int i=0;i<N;i++){
    cin >> D.at(i);
  }
  if(P < Q+*min_element(D.begin(), D.end())){
    cout << P << endl;
  }
  else{
    cout << Q+*min_element(D.begin(), D.end()) << endl;
  }
}
