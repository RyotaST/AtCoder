#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  int N,Q;
  string S;
  cin >> N >> S >> Q;
  vector<int> t(Q);
  vector<int> x(Q);
  vector<char> c(Q);
  int index;
  rep(i,0,Q){
    cin >> t[i] >> x[i] >> c[i];
    if(t[i] == 2 || t[i] == 3){
     index = i;
    }
  }
  rep(i,0,Q){
    if(t[i] == 1){
      S[x[i]-1] = c[i];
    }
    if(i == index){
    	if(t[i] == 2){
          transform(S.begin(), S.end(), S.begin(), [](char c) {return tolower(c);});
        }
        else if(t[i] == 3){
          transform(S.begin(), S.end(), S.begin(), [](char c) {return toupper(c);});
        }
    }
  }
  cout << S << endl;
}