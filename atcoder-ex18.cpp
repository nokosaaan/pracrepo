#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  vector<vector<string>> vec(N,vector<string>(N,"-"));
  for(int j=0; j<M; j++){
      if(A.at(j)!=B.at(j)){
          vec.at(A.at(j)-1).at(B.at(j)-1)="o";
          vec.at(B.at(j)-1).at(A.at(j)-1)="x";
      }
  }
  for(int l=0; l<N; l++){
      for(int m=0; m<N; m++){
          cout << vec.at(l).at(m) ;
          if(m==N-1) cout << endl;
          else cout << " ";
      }
      
  }
  
}
