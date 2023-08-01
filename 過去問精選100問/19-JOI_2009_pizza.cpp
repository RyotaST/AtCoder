#include <bits/stdc++.h>
using namespace std;

int main(){
    long long ans = 0;
    long long d;
    cin >> d;
    int n;
    cin >> n;
    vector<long long> S(n*2+1);
    S.at(0) = 0;
    S.at(n) = d;
    S.at(n*2) = 2*d;
    int m;
    cin >> m;
    vector<long long> T(m*2);
    for(int i=1;i<n;i++){
      cin >> S.at(i);
      S.at(i+n) = d + (d-S.at(i));
    }
    for(int i=0;i<m;i++){
      cin >> T.at(i);
      T.at(i+m) = d+(d-T.at(i));
    }
    sort(S.begin(),S.end());
    for(int i=0;i<m;i++){
      auto it1 = lower_bound(S.begin(),S.end(),T.at(i));
      auto it2 = lower_bound(S.begin(),S.end(),T.at(i+m));
      long long dis1 = abs(T.at(i)-*it1);
      long long dis2 = abs(T.at(i+m)-*it2);
      if(dis1 < dis2){
        ans += dis1;
      }
      else{
        ans += dis2;
      }
    }
    cout << ans << endl;
}