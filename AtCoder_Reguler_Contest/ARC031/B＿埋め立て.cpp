#include <bits/stdc++.h>
using namespace std;

int count_o(vector<string> islands,int i,int j, int count, vector<vector<bool>> &flg){
  if(i<0 || i>=10 || j<0 || j>=10 || flg.at(i).at(j) == false){
    return 0;
  }
  else{
    if(islands.at(i).at(j) == 'x'){
      return 0;
    }
    flg.at(i).at(j) = false;
    int count = 0;
    count += 1;
    count += count_o(islands, i-1, j, count, flg);
    count += count_o(islands, i, j-1, count, flg);
    count += count_o(islands, i, j+1, count, flg);
    count += count_o(islands, i+1, j, count, flg);
    return count;
  }
}

bool check(vector<string> islands,int o_count, int i,int j, vector<vector<bool>> &flg){
  int count = 0;
  if(islands.at(i).at(j) == 'x'){
    islands.at(i).at(j) = 'o';
    o_count += 1; //xをoに変えるので、oは入力+1と一致でans
  }
  count += count_o(islands, i, j, count, flg);
  if(count == o_count){
    return true;
  }
  else{
    return false;
  }
}

int main() {
  vector<string> islands(10);
  int o_count = 0;
  for(int i=0; i<10; i++){
    cin >> islands.at(i);
    for(int j=0;j<10;j++){
      if(islands.at(i).at(j) == 'o'){
        o_count += 1;
      }
    }
  }
  
  for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
      vector<vector<bool>> flg(10, vector<bool>(10, true));
      if(check(islands, o_count, i, j, flg)){
        cout << "YES" << endl;
        exit(0);
      }
    }
  }
  cout << "NO" << endl;
}
