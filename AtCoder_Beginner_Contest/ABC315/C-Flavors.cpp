#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N;
  cin >> N;
  vector<vector<long long>> FS(N+1,vector<long long>(2,0));
  vector<long long> S(N);
  vector<long long>max_all(2,0);
  long long FS_max = 0;
  rep(i,0,N){
    int f;
    long long s;
    cin >> f >> s;
    if(FS[f][0] < s){
      FS[f][1] = FS[f][0];
      FS[f][0] = s;
    }
    else if(FS[f][1] < s){
      FS[f][1] = s;
    }
  }
  rep(i,0,N+1){
    if(max_all[0] < FS[i][0]){
      max_all[1] = max_all[0];
      max_all[0] = FS[i][0];
    }
    else if(max_all[1] < FS[i][0]){
      max_all[1] = FS[i][0];
    }
    if(FS_max < FS[i][0]+FS[i][1]/2) FS_max = FS[i][0]+FS[i][1]/2;
  }
  cout << max(max_all[0]+max_all[1], FS_max) << endl;
}