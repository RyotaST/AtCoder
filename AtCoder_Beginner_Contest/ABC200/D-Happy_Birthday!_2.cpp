#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N+1);
  A.at(0) = 1;
  int a = 0;
  set<int> s = {1};
  int num;
  for(int i=1;i<N;i++){
    cin >> A.at(i);
  }
  while(1){
    if(s.count(A.at(0))){
      num = A.at(a);
      break;
    }
    else{
      s.insert(A.at(a));
    }
    a++;
  }
  int b;
  for(int i=0;i<N;i++){
    if(A.at(i) == num){
      ans = (a-i)+1;
      b = i;
    }
  }
  for(int i=i;i<a+1;i++){
    cout << A.at(i);
    if(i == a){
      cout << endl;
    }
    else{
      cout << " ";
    }
  }
}
