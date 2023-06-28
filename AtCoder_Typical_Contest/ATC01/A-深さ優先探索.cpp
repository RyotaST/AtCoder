#include <bits/stdc++.h>
using namespace std;

bool check(int H, int W, int i, int j, vector<string> &str, vector<vector <bool>> &flg){
  if(i<0 || i>=H || j<0 || j>=W || flg.at(i).at(j) == false){
    return false;
  }
  if(flg.at(i).at(j) == true){
    flg.at(i).at(j) = false;
    if(str.at(i).at(j) == '.' || str.at(i).at(j) == 's'){
      if(check(H,W,i-1,j,str,flg) || check(H,W,i,j-1,str,flg) || check(H,W,i+1,j,str,flg) || check(H,W,i,j+1,str,flg)){
        return true;
      }
      else{
        return false;
      }
    }
    if(str.at(i).at(j) == '#'){
      return false;
    }
    if(str.at(i).at(j) == 'g'){
      return true;
    }
  }
}

int main() {
  int H,W;
  cin >> H >> W;
  int a,b;
  vector<string> str(H);
  vector<vector<bool>> flg(H, vector<bool>(W, true));
  for(int i=0;i<H;i++){
    cin >> str.at(i);
    for(int j=0; j<W; j++){
      if(str.at(i).at(j) == 's'){
        a = i;
        b = j;
      }
    }
  }
  if(check(H, W, a,b, str, flg)){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}