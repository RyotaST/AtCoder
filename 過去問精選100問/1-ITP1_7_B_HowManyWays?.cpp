#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,x;
  cin >> n >> x;
  do{
    int ans = 0;
    for(int i=1;i<=n;i++){
      for(int j=i;j<=n-1;j++){
        for(int k=j;k<=n-2;k++){
          if(i+j+1+k+2 == x){
            ans += 1;
          }
        }
      }
    }
    cout << ans << endl;
    cin >> n >> x;
  }while(n != 0 && x != 0);
}