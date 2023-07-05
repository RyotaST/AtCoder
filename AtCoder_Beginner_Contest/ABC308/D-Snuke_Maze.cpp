#include <bits/stdc++.h>
using namespace std;

bool char_check(int h, int w,vector<string> &S,int count){
  if(count%5 == 0){
    if(S.at(h).at(w) == 's'){
      return true;
    }
    else{
      return false;
    }
  }
  else if(count%5 == 1){
    if(S.at(h).at(w) == 'n'){
      return true;
    }
    else{
      return false;
    }
  }
  else if(count%5 == 2){
    if(S.at(h).at(w) == 'u'){
      return true;
    }
    else{
      return false;
    }
  }
  else if(count%5 == 3){
    if(S.at(h).at(w) == 'k'){
      return true;
    }
    else{
      return false;
    }
  }
  else if(count%5 == 4){
    if(S.at(h).at(w) == 'e'){
      return true;
    }
    else{
      return false;
    }
  }
  else{
    return false;
  }
}

bool check(int h, int w, int H, int W, vector<string> &S, vector<vector<vector<bool>>> &flg, int count, int arrow){
  bool ans;
  if(h<0 || h>=H || w<0 || w>=W || flg.at(h).at(w).at(arrow) == false){
    return false;
  }
  else{
    flg.at(h).at(w).at(arrow) = false;
    ans = char_check(h,w,S,count);
    if(ans){
      count += 1;
      if(h==(H-1) && w==(W-1)){
        return true;
      }
      else{
        return (check(h-1,w,H,W,S,flg,count,0) || check(h,w-1,H,W,S,flg,count,1) || check(h+1,w,H,W,S,flg,count,2) || check(h,w+1,H,W,S,flg,count,3));
      }
    }
    else{
      return false;
    }
  }
}

int main() {
  int H,W;
  cin >> H >> W;
  int count = 0;
  vector<string> S(H);
  vector<vector<vector<bool>>> flg(H, vector<vector<bool>>(W, vector<bool>(4, true)));
  for(int i=0; i<H; i++){
    cin >> S.at(i);
  }
  if(check(0,0,H,W,S,flg,count,0) || check(0,0,H,W,S,flg,count,1) || check(0,0,H,W,S,flg,count,2) || check(0,0,H,W,S,flg,count,3)){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
