#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,n) for (int i=(int)x;i<(int)n;i++)

class UnionFind {
public:
    vector<int> parent;
    vector<int> size;

    UnionFind(int n) {
        parent.resize(n);
        size.resize(n, 1);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] == x) {
            return x;
        } else {
            parent[x] = find(parent[x]);
            return parent[x];
        }
    }

    void unite(int x, int y) {
        int root_x = find(x);
        int root_y = find(y);
        if (root_x == root_y) return;

        if (size[root_x] < size[root_y]) {
            parent[root_x] = root_y;
            size[root_y] += size[root_x];
        } else {
            parent[root_y] = root_x;
            size[root_x] += size[root_y];
        }
    }

    bool same(int x, int y) {
        return find(x) == find(y);
    }
};

int main(){
  int N1,N2,M;
  cin >> N1 >> N2 >> M;
  vector<vector<int>> ab; 
  rep(i,0,M){
    int a,b;
    cin >> a >> b;
    ab.push_back({a,b});
  }
  UnionFind UF(N1+N2);
  rep(i,0,M) UF.unite(ab[i][0]-1, ab[i][1]-1);
  cout << UF.size[UF.find(N1+N2-1)]+1 << endl;
}
