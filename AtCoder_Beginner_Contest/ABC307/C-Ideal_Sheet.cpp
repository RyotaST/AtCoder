#include <bits/stdc++.h>
using namespace std;

int main() {
  int Ha, Wa, Hb, Wb, Hx, Wx;
  cin >> Ha >> Wa;
  vector<string> A(Ha);
  for(int i=0; i<Ha; i++){
    cin >> A.at(i);
  }
  cin >> Hb >> Wb;
  vector<string> B(Hb);
  for(int i=0; i<Hb; i++){
    cin >> B.at(i);
  }
  cin >> Hx >> Wx;
  vector<string> X(Hx);
  for(int i=0; i<Hx; i++){
    cin >> X.at(i);
  }
  
  vector<string> C(10);
  for(int i=0;i<10;i++){
    C.at(i) = "..........";
  }
  
  for(int i=0;i<(10-Ha)+1;i++){
    for(int j=0; j<(10-Wa)+1; j++){
      for(int k=0;k<Ha;k++){
        //Aのシートの縦のループ
        for(int l=0;l<Wa;l++){
          //Aのシートの横のループ
          if(A.at(k).at(l) == '#'){
            C.at(k+i).at(l+j) = A.at(k).at(l);
          }
        }
      }
      for(int m=0;m<(10-Hb)+1;m++){
        for(int n=0;n<(10-Wb)+1;n++){
          vector<string> s3= C;
          for(int o=0; o<Hb; o++){
            for(int p=0;p<Wb;p++){
              if(B.at(o).at(p) == '#'){
                C.at(m+o).at(n+p) = B.at(o).at(p);
              }
            }
          }
          for(int q=0; q<(10-Hx)+1; q++){
            for(int r=0; r<(10-Wx)+1; r++){
              bool ans = true;
              vector<vector<bool>> flg(10, vector<bool>(10,true)); //X範囲外はtrueのflg
              for(int s=0; s<Hx; s++){
                for(int t=0; t<Wx; t++){
                  flg.at(q+s).at(r+t) = false;
                  if(C.at(q+s).at(r+t) == X.at(s).at(t)){
                    continue;
                  }
                  else{
                    ans = false;
                  }
                }
              }
              for(int v=0; v<10; v++){
                for(int w=0; w<10; w++){
                  if(flg.at(v).at(w)){
                    if(C.at(v).at(w) == '#'){
                      ans = false;
                    }
                  }
                }
              }
              if(ans){
                cout << "Yes" << endl;
                exit(0);
              }
            }
            /*
            for(int sample=0; sample<10; sample++){
              cout << C.at(sample) << endl;
            }
            cout << endl;
            */
          }
          C = s3;
        }
      }

      for(int u=0;u<10;u++){
        C.at(u) = "..........";
      }
    }
  }
  cout << "No" << endl;
}