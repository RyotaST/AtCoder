#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int A,B,C,X,Y;
  cin >> A >> B >> C >> X >> Y;
  int half = C/2;
  long long ans = 0;
  if((A+B-C*2)>0){
    ans += C*2*small*(X+Y);
    if(A>B){
      A = A-B;
      B = 0;
      if(A <= 2*C){
        ans += A*X;
      }
      else{
        ans += 2*C*A;
      }
    }
    else{
      A = 0;
      B = B-A;
      if(Y <= 2*C){
        ans += Y*B;
      }
      else{
        ans += 2*C*A;
      }
    }
  }
  else{
    ans += A*X+B*Y;
  }
  cout << ans << endl;
}