#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力
  x++;
  cout << x << endl;

  // ここにプログラムを追記
  int A = x++*(a+b);
  cout << A << endl;
  cout << A*A << endl;
  cout << A*A-1 << endl;
}
/*感想：普通、計算量が多いので、全出力に共通しそうな計算結果
  は適宜変数に保管しておくとcout以下がすっきりするかも*/