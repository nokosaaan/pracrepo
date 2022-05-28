#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  int i=0;
  int t=0;
  cout << "A:";
  while(i<A){
  	cout << "]";
    i++;
  }
  cout << endl;
  cout << "B:";
  while(t<B){
  	cout << "]";
    t++;
  }
  cout << endl;
}
/*感想：難しい、改行の仕方がcout << endl;でできるということを
  知らなかったので時間がかかった。あとはwhile構文をうまく使ってやれるかどうか*/