#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  long long sum = 0;
  long long ans = 0;
  rep(i,0,N){
    cin >> A[i];
    sum += A[i];
  }
  long long a = sum/N;
  long long b = sum%N;
  vector<int> check;
  sort(A.begin(), A.end());
  rep(i,0,N-b){
    check.push_back(a);
  }
  rep(i,0,b){
    check.push_back(a+1);
  }
  long long plus = 0;
  long long minus = 0;
  rep(i,0,N){
    if(check[i] - A[i] >= 0){
      plus += check[i] - A[i];
    }
    else{
      minus += A[i] - check[i];
    }
  }
  cout << max(plus, minus) << endl;
}