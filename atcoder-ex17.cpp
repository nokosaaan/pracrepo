#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
  int c=0;
  for(int m=0; m<N; m++){
      for(int n=0; n<N; n++){
          if(A[m]+P[n]==S){
              c++;
          }
      }
  }
  cout << c << endl;
}
/*感想：普通、二重for文の典型的問題。
        (m,n)=(0,0)から始まり、(m,n)=(0,N-1)
        になれば、m++が実行され、(m,n)=(1,0)
        となり、またfor文が始まる。組み合わせの数は
        cで管理している。*/
