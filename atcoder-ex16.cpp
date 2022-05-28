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
