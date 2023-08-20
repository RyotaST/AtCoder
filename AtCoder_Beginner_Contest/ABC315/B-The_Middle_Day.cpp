#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int a;
  cin >> a;
  vector<int> day_sum(a);
  vector<int> D(a);
  int sum = 0;
  rep(i,0,a){
    int day;
    cin >> day;
    D[i] = day;
    sum += day;
    day_sum[i] = sum;
  }
  rep(i,0,a){
    if(day_sum[i] >= (sum+1)/2){
      cout << i+1 << " " << D[i] - (day_sum[i] - (sum+1)/2) << endl;
      break;
    }
  }
  return 0;
}