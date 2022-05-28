#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // 1の数を表す変数
  int count = 0;

  for (int i = 0; i < S.size(); i++) {

    // 1があればcountを増やす
    if (S.at(i) == '1') {
      count++;
    }
    // -があればcountを2減らす
    if (S.at(i) == '-'){
      count -= 2;
    }

  }

  cout << count << endl;
}

/*感想：普通、サンプルコードコピペしてあれこれ考える問題
        +の時は問題ないんだけど、-が出てきたときどうやって
        引き算と認識させるかが鍵となる。計算結果が合う
        ためには-が出てきたらcountを-2すればつじつまが合う
        というのはゴリ押しくさいけどACが出ればいいんですよ(クズ)*/