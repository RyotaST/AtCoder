#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int anti_count = 0;
  int poison_count = 0;
  int min_count;
  int damage = 0;
  long long ans = 0;
  priority_queue<long long> dishes_anti;
  priority_queue<long long> dishes_poison;
  for(int i=0;i<N;i++){
    int a;
    long long b;
    cin >> a >> b;
    if(a == 1){
      if(b <= 0){
        continue;
      }
      dishes_poison.push(b);
      anti_count += 1;
    }
    else{
      dishes_anti.push(b);
      poison_count += 1;
    }
  }
  min_count = min(anti_count, poison_count);
  while(1){
    int a,b;
    if(dishes_poison.empty()){
      while(dishes_anti.empty()){
        if(dishes_anti.top() > 0){
          ans += dishes_anti.top();
        }
        else{
          break;
        }
      }
      break;
    }
    if(dishes_anti.empty()){
      if(damage == 1){
        break;
      }
      else{
        ans += dishes_poison.top();
        break;
      }
    }
    a = dishes_poison.top();
    b = dishes_anti.top();
    if(damage == 0){
      damage += 1;
      ans += a;
      dishes_poison.pop();
      continue;
    }
    else{
      if(a+b>0){
        ans += b;
        damage -= 1;
        dishes_anti.pop();
      }
      else{
        break;
      }
    }
  }

  cout << ans << endl;
  /*
  for(int i=0;i<(int)dishes_poison.size();i++){
    cout << dishes_poison.at(i) << endl;
  }
  */
}