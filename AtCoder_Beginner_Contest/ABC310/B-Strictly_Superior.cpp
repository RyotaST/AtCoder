#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M;
  cin >> N >> M;
  vector<vector<int>> item(N, vector<int>());
  vector<set<int>> s(N, set<int>());
  for(int i=0;i<N;i++){
    for(int j=0;j<2;j++){
      int a;
      cin >> a;
      item.at(i).push_back(a);
      if(j == 1){
        for(int h=0;h<item.at(i).at(1);h++){
          int b;
          cin >> b;
          s.at(i).insert(b);
        }
      }
    }
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(i == j){
        continue;
      }
      if(item.at(i).at(0) >= item.at(j).at(0)){
        int count = 0;
        for(auto value : s.at(i)){
          if(s.at(j).count(value)){
            count += 1;
          }
          if(count == item.at(i).at(1) && item.at(i).at(0) > item.at(j).at(0)){
            cout << "Yes" << endl;
            exit(0);
          }
          if(count == item.at(i).at(1) && item.at(j).at(1) > count){
            cout << "Yes" << endl;
            exit(0);
          }
        }
      }
    }
  }
  cout << "No" << endl;
}
