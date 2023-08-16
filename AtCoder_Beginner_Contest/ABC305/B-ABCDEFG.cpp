#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  char p,q;
  cin >> p >> q;
  vector<int> dist = {0,3,4,8,9,14,23};
  int dist1, dist2;
  if(p == 'A'){
    dist1 = dist[0];
  }
  if(p == 'B'){
    dist1 = dist[1];
  }
  if(p == 'C'){
    dist1 = dist[2];
  }
  if(p == 'D'){
    dist1 = dist[3];
  }
  if(p == 'E'){
    dist1 = dist[4];
  }
  if(p == 'F'){
    dist1 = dist[5];
  }
  if(p == 'G'){
    dist1 = dist[6];
  }
  if(q == 'A'){
    dist2 = dist[0];
  }
  if(q == 'B'){
    dist2 = dist[1];
  }
  if(q == 'C'){
    dist2 = dist[2];
  }
  if(q == 'D'){
    dist2 = dist[3];
  }
  if(q == 'E'){
    dist2 = dist[4];
  }
  if(q == 'F'){
    dist2 = dist[5];
  }
  if(q == 'G'){
    dist2 = dist[6];
  }
  cout << max(dist1,dist2)-min(dist1,dist2) << endl;
}