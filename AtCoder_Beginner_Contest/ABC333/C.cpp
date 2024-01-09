#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N;
  cin >> N;
  set<long long> s;
  long long a = 1;
  long long b = 1;
  long long c = 1;
  rep(i,0,12){
    if(i != 0){
      a = (a*10)+1;
    }
    rep(j,0,12){
      if(j != 0){
        b = (b*10)+1;
      }
      else{
        b = 1;
      }
      rep(k,0,12){
        if(k != 0){
          c = (c*10)+1;
        }
        else{
          c = 1;
        }
        s.insert(a+b+c);
      }
    }
  }
  auto it = s.begin();
  rep(i,1,N) *it++;
  cout << *it << endl;
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