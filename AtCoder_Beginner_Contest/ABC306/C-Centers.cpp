#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<pair<int, int>> A(N*3+1);
  for(int i=1;i<=3*N;i++){
    int a;
    cin >> a;
    A.at(i) = make_pair(a,i);
  }
  sort(A.begin(), A.end());
  for(int i=1;i<=3*N;i++){
    int a,b;
    tie(a,b) = A.at(i);
  }
  vector<pair<int, int>> B(N+1);
  for(int i=1;i<=N;i++){
    int a,b;
    tie(a,b) = A.at(3*i-1);
    B.at(i) = make_pair(b,a);
  }
  sort(B.begin(),B.end());
  for(int i=1;i<=N;i++){
    cout << B.at(i).second;
    if(i<N){
      cout << " ";
    }
  }
}