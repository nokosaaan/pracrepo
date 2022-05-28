#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A;
  string op;
  for (int i=0; i<N; i++){
  	cin >> op >> B;
      if (op=="+"){
     cout << i+1 << ":" << A+B << endl;
     A = A+B;
    }
    else if (op=="-"){
    	cout << i+1 << ":" << A-B << endl;
        A = A-B;
    }
    else if (op=="*"){
    	cout << i+1 << ":" << A*B << endl;
        A = A*B;
    }
    else if (op=="/"){
    	if (B==0){
        	cout << "error" << endl;
            break;
        }
      else if (B!=0){
      	cout << i+1 << ":" << A/B << endl;
          A = A/B;
      }
    
    }
    
    }
  
}
/*感想：難しい、前回の計算結果をどう引き継ぐかに頭を
        悩ませた記憶。結局Aに再代入すればいいのではという結論に
        ・ifの中身は==じゃないとエラーが出る
        ・0除算のときはきちんとbreak;してあげる
        ・opや:はstring型なので""で囲ってあげる
        気をつけるのはこのへんかな*/