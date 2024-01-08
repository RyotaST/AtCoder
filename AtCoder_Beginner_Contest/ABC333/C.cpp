#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N;
  cin >> N;
  int num;
  num = (N+1)/3;
  int s = 1;
  int sum = 1;
  rep(i,0,num){
    s *= 10;
    sum += s;
  }
  int ans = 0;
  int check = (N-1)%3;
  if(check == 0){
    ans = sum*3;
  }
  else{
    rep(i,0,check){
      ans += sum;
    }
    rep(i,0,3-check){
      ans += (sum-s);
    }
  }
  cout << ans << endl;
}

/*
1 1,1,1     0
2 1,1,11    1
3 1,11,11   1
4 11,11,11  1
5 1,1,111 2
6 1,11,111  2
7 11,11,111 2
*/