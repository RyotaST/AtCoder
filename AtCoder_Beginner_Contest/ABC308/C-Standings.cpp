#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  vector<pair<long double, int>> p;
  cin >> N;
  for(int i=0; i<N; i++){
    int a,b;
    cin >> a >> b;
    p.push_back(make_pair((long double)a/(a+b),i+1));
  }
  sort(p.begin(),p.end(),[](pair<long double, int> a, pair<long double, int> b){
    if(a.first == b.first){
      return a.second < b.second;
    }else{
    return a.first>b.first;
    }
  });
  for(int i=0; i<N; i++){
    //cout << p.at(i).first;
    cout << p.at(i).second;
    if(i != N-1){
      cout << " ";
    }
  }  
}
