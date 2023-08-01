#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    int ans = 0;
    cin >> n;
    vector<long long> S(n);
    for(int i=0;i<n;i++) cin >> S.at(i);
    cin >> q;
    vector<long long> T(q);
    for(int i=0;i<q;i++) cin >> T.at(i);
    sort(S.begin(),S.end());
    for(int i=0;i<q;i++){
        auto it = lower_bound(S.begin(), S.end(), T.at(i));
        if(*it == T.at(i)) {
          ans+=1;
        }
    }
    cout << ans << endl;
}