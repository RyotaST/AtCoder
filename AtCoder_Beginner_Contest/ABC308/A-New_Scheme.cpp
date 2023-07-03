#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> N(8);
  bool check = true;
  for(int i=0; i<8; i++){
    cin >> N.at(i);
    if(N.at(i) < 100 || N.at(i) > 675){
      cout << "No" << endl;
      exit(0);
    }
    if(N.at(i)%25 != 0){
      cout << "No" << endl;
      exit(0);
    }
  }
  for(int i=0;i<7; i++){
    if(N.at(i) > N.at(i+1)){
      check = false;
    }
  }
  if(check){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
