#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N;
  cin >> N;
  if(N%10>=3){
    cout << N+(5-N%10) << endl;
  }
  else{
    cout << N-(N%10) << endl;
  }
}