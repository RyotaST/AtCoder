#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int n;
  cin >> n;
  vector<pair<int, int>> xy(n,pair<int, int>());
  rep(i,0,n) cin >> xy.at(i).first >> xy.at(i).second;
  long long ans = 0;
  rep(i,0,n-1){
    rep(j,i+1,n){
      int abx,aby;
      abx = xy.at(j).first-xy.at(i).first;
      aby = xy.at(j).second-xy.at(i).second;
      pair<int, int> partical;
      partical.first = -abx;
      partical.second = aby;
      pair<int, int> find_point1,find_point2;
      find_point1.first = xy.at(j).first+partical.first;
      find_point1.second =  xy.at(j).second+partical.second;
      find_point2.first = xy.at(i).first+partical.first;
      find_point2.second = xy.at(i).second+partical.second;
      if(find(xy.begin(), xy.end(), find_point1) && find(xy.begin(),xy.end(), find_point2)){
        ans = max(sqrt(abx*abx+aby*aby)*sqrt(partical.first*partical.first+partical.second*partical.second));
      }
    }
  }
  cout << ans << endl;
}