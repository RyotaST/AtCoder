#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

int main(){
  char s1,s2,t1,t2;
  int value_s1,value_s2,value_t1,value_t2;
  int dis_s, dis_t;
  cin >> s1 >> s2 >> t1 >> t2;
  vector<pair<char, int>> box = {{'A',0},{'B',1},{'C',2},{'D',3},{'E',4}};
  rep(i,0,5){
    if(s1 == box[i].first){
      value_s1 = box[i].second;
    }
    if(s2 == box[i].first){
      value_s2 = box[i].second;
    }
    if(t1 == box[i].first){
      value_t1 = box[i].second;
    }
    if(t2 == box[i].first){
      value_t2 = box[i].second;
    }
  }
  if(abs(value_s1 - value_s2) >= 3){
    dis_s = 5-abs(value_s1 - value_s2);
  }
  else{
    dis_s = abs(value_s1-value_s2);
  }
  if(abs(value_t1 - value_t2) >= 3){
    dis_t = 5-abs(value_t1 - value_t2);
  }
  else{
    dis_t = abs(value_t1 - value_t2);
  }
  if(dis_s == dis_t){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}