#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  int judge =0;
  for(int j=0; j+1<5; j++){
      if(data[j]==data[j+1]){
          break;
      }
      else{
          judge++;
      }
  }
  if(judge==4){
      cout << "NO" << endl;
  }
  else if(judge!=4){
      cout << "YES" << endl;
  }
}
/*感想：普通、jとj+1の配列要素を比較する関係上
        j+1<5の範囲でforを回さないと配列外参照になる。
        便宜上judgeという変数で隣り合う等しい要素
        があるか判断させている。if文に入ることなく
        ずっとelseの中の命令を実行し続けてれば
        judgeの値は4となり、これが隣り合う等しい要素は
        ないということを示している。*/
